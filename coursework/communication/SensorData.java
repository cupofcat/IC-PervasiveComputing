import java.util.Collection;

import net.tinyos.message.Message;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


public class SensorData {

	private static final String GROUP_ID = "8";
	private static final String KEY = "StoAhjeg";
	private static final String GROUP_NAME = "Group8";
	private static final String EVENT_TYPE_FIRE = "FIRE";
	private static final String EVENT_MSG_FIRE = "FIRE has broken out!";


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

	private static JSONArray toJSONArray(Collection<SensorMsg> sensorData) {
		JSONArray dataArrayJSON = new JSONArray();
		for(SensorMsg data : sensorData) {
			dataArrayJSON.put(toJSON(data));
		}
		return dataArrayJSON;
	}

	public static JSONObject buildSensorDataJSONForCouchDB(SensorMsg message) {
		JSONObject documentJSON = new JSONObject();
		try {
			documentJSON.put("nodeId", message.get_node_id());
			documentJSON.put("lux", message.get_raw_light());
			documentJSON.put("temp", message.get_raw_temp());
			documentJSON.put("time", System.currentTimeMillis());
		} catch (JSONException e) {
			System.out.println("Building of document JSONObject failed!");
			e.printStackTrace();
		}
		return documentJSON;
	}
}
