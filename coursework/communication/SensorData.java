import java.util.Collection;

import net.tinyos.message.Message;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


public class SensorData {

	private static final String GROUP_ID = "8";
	private static final String KEY = "StoAhjeg";
	private static final String GROUP_NAME = "Group8";

	public static JSONObject toJSON(SensorMsg message) {
		JSONObject dataJSON = new JSONObject();
		try {
			dataJSON.put("sensorId", 1);
			dataJSON.put("timestamp", System.currentTimeMillis());
			dataJSON.put("temp", message.get_raw_temp());
			dataJSON.put("lux", message.get_raw_light());
		} catch (JSONException e) {
			System.out.println("Building of individual sensor data JSONObject failed!");
			e.printStackTrace();
		}
		return dataJSON;
	}

	public static JSONObject buildSensorDataJSON(Collection<SensorMsg> sensorData) {
		JSONObject sensorDataJSON = new JSONObject();
		try {
			sensorDataJSON.put("groupId", GROUP_ID);
			sensorDataJSON.put("key", KEY);
			sensorDataJSON.put("groupName", GROUP_NAME);
			sensorDataJSON.put("sensorData", toJSONArray(sensorData));
		} catch (JSONException e) {
			System.out.println("Building of collective sensor data JSONObject failed!");
			e.printStackTrace();
		}
		return sensorDataJSON;
	}

	private static JSONArray toJSONArray(Collection<SensorMsg> sensorData) {
		JSONArray dataArrayJSON = new JSONArray();
		for(SensorMsg data : sensorData) {
			dataArrayJSON.put(toJSON(data));
		}
		return dataArrayJSON;
	}
}
