package doc.pervasive.Pervasive;

import java.util.Collection;
import java.util.Queue;
import java.util.concurrent.LinkedBlockingQueue;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


public class SensorData {

	private static final String ERROR = "ERROR: ";
	private static final String GROUP_ID = "8";
	private static final String KEY = "StoAhjeg";
	private static final String GROUP_NAME = "Group8";
	private static final String EVENT_TYPE_FIRE = "FIRE";
	private static final String EVENT_MSG_FIRE = "FIRE has broken out!";
	private static final int BUFFER_SIZE = 10;
	private static final long TEMP_TRESHOLD = 5;
	
	private Queue<Long> tempBuffer;
	private long minReading;
	private long maxReading; 
	
	private int lux;
	private int temp;
	private int nodeId;
	private long timestamp;
	private int eventType;

	public SensorData() {
		this.tempBuffer = new LinkedBlockingQueue<Long>();
		this.lux = 0;
		this.temp = 0;
		this.nodeId = 0;
		this.timestamp = 0;
		this.eventType = 0;
	}

	public SensorData(SensorMsg sMessage) {
		this.tempBuffer = new LinkedBlockingQueue<Long>();
		this.lux = sMessage.get_raw_light();
		this.temp = normaliseToCelsius(sMessage.get_raw_temp());
		this.nodeId = sMessage.get_node_id();
		this.timestamp = System.currentTimeMillis();
		this.eventType = sMessage.get_event_type();
	}
	
	public int getLux() {
		return lux;
	}

	public void setLux(int lux) {
		this.lux = lux;
	}

	public int getTemp() {
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

	public int getEventType() {
		return eventType;
	}

	public void setEventType(int eventType) {
		this.eventType = eventType;
	}

	private int normaliseToCelsius(int getRawTemp) {
		// TODO Auto-generated method stub
		return 0;
	}
	
	public JSONObject toJSON(boolean noLux) {
		JSONObject dataJSON = new JSONObject();
		try {
			dataJSON.put("sensorId", nodeId);
			dataJSON.put("timestamp", timestamp);
			dataJSON.put("temp", !noLux ? temp : null);
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

	public boolean fireDetected(long tempReading) {
		if (tempBuffer.isEmpty()) {
			minReading = tempReading;
			maxReading = tempReading;
		} 
		if(tempBuffer.size() == BUFFER_SIZE) {
			tempBuffer.poll();
		} 
		tempBuffer.add(tempReading);
		
		if(tempReading > maxReading) {
			maxReading = tempReading;
		} else if (tempReading < minReading) {
			minReading = tempReading;
		}
		
		if(maxReading - minReading >= TEMP_TRESHOLD) {
			return true;
		}
		return false;
	}

	public int normaliseTemperatureReading(long tempReading) {
		return 10;
	}

}
