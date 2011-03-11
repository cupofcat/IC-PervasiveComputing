package doc.pervasive.Pervasive;

import java.util.ArrayList;
import java.util.Collection;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


public class SensorData {

	public static int[] luxes = new int[2];
	
	private static final double A = 0.001010024;
	private static final double B = 0.000242127;
	private static final double C = 0.000000146;
	private static final double R1 = 10000;
	private static final double ADC_FS = 1023;
	private static final double KELVIN_TO_C = 273.15;
	
	private static final String ERROR = "ERROR: ";
	private static final String GROUP_ID = "8";
	private static final String KEY = "StoAhjeg";
	private static final String GROUP_NAME = "Group8";
	private static final String EVENT_TYPE_FIRE = "FIRE";
	private static final String EVENT_MSG_FIRE = "FIRE has broken out!";
	private static final int BUFFER_SIZE = 30;
	private static final double TEMP_TRESHOLD = 5.0;
	
	private static ArrayList<Double> tempBuffer = new ArrayList<Double>();
	
	private int lux;
	private double temp;
	private int nodeId;
	private long timestamp;

	public SensorData() {
		this.lux = 0;
		this.temp = 0;
		this.nodeId = 0;
		this.timestamp = 0;
	}

	public SensorData(SensorMsg sMessage) {
		this.lux = sMessage.get_raw_light();
		this.temp = normaliseToCelsius(sMessage.get_raw_temp());
		this.nodeId = sMessage.get_node_id();
		this.timestamp = System.currentTimeMillis();
		luxes[nodeId % 2] = this.lux;
	}
	
	public int getLux() {
		return lux;
	}

	public void setLux(int lux) {
		this.lux = lux;
	}

	public double getTemp() {
		return temp;
	}

	public void setTemp(int temp) {
		this.temp = temp;
	}

	public int getNodeId() {
		return nodeId;
	}

	public void setNodeId(int nodeId) {
		this.nodeId = nodeId;
	}

	public long getTimestamp() {
		return timestamp;
	}

	public void setTimestamp(long timestamp) {
		this.timestamp = timestamp;
	}

	private double normaliseToCelsius(int getRawTemp) {
		double rThr = R1 * (ADC_FS - getRawTemp) / getRawTemp;
		double rLog = Math.log(rThr);
		return 1.0 / (A + B * rLog + C * Math.pow(rLog, 3.0)) - KELVIN_TO_C;
	}
	
	public JSONObject toJSON(boolean noLux) {
		JSONObject dataJSON = new JSONObject();
		try {
			dataJSON.put("sensorId", nodeId);
			dataJSON.put("timestamp", timestamp);
			dataJSON.put("temp", noLux ? temp : null);
			dataJSON.put("lux", noLux ? null : lux);
		} catch (JSONException e) {
			System.out.println(ERROR + "Building of individual sensor data JSONObject failed!");
			e.printStackTrace();
		}
		return dataJSON;
	}

	public static JSONObject buildSensorDataJSON(
			Collection<SensorData> sensorData, boolean noLux) {
		JSONObject sensorDataJSON = new JSONObject();
		try {
			sensorDataJSON.put("groupId", GROUP_ID);
			sensorDataJSON.put("key", KEY);
			sensorDataJSON.put("groupName", GROUP_NAME);
			sensorDataJSON.put("sensorData", toJSONArray(sensorData, noLux));
		} catch (JSONException e) {
			System.out.println(ERROR + "Building of collective sensor data JSONObject failed!");
			e.printStackTrace();
		}
		return sensorDataJSON;
	}

	public static JSONObject buildFireEventJSON() {
		JSONObject eventJSON = new JSONObject();
		try {
			eventJSON.put("groupId", GROUP_ID);
			eventJSON.put("key", KEY);
			eventJSON.put("groupName", GROUP_NAME);
			eventJSON.put("eventType", EVENT_TYPE_FIRE);
			eventJSON.put("eventMessage", EVENT_MSG_FIRE);
		} catch (JSONException e) {
			System.out.println("Building of fire event JSONObject failed!");
			e.printStackTrace();
		}
		return eventJSON;
	}

	private static JSONArray toJSONArray(Collection<SensorData> sensorData, boolean noLux) {
		JSONArray dataArrayJSON = new JSONArray();
		for(SensorData data : sensorData) {
			dataArrayJSON.put(data.toJSON(noLux));
		}
		return dataArrayJSON;
	}

	public JSONObject buildSensorDataJSONForCouchDB() {
		JSONObject documentJSON = new JSONObject();
		try {
			documentJSON.put("nodeId", nodeId);
			documentJSON.put("lux", lux);
			documentJSON.put("temp", temp);
			documentJSON.put("time", System.currentTimeMillis());
		} catch (JSONException e) {
			System.out.println("Building of document JSONObject failed!");
			e.printStackTrace();
		}
		return documentJSON;
	}

	public boolean fireDetected(double tempReading) {

		if(tempBuffer.size() == BUFFER_SIZE) {
			tempBuffer.remove(0);
		}
		tempBuffer.add(tempReading);
		if (luxes[0] >= 100 || luxes[1] >= 100) {
			return false;
		}
		for (int i = 0; i < tempBuffer.size(); ++i) {
			for (int j = i + 1; j < tempBuffer.size(); ++j) {
				if (tempBuffer.get(j) - tempBuffer.get(i) > TEMP_TRESHOLD) {
					return true;
				}
			}
		}
		return false;
	}

}
