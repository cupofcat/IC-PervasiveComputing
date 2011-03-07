package doc.pervasive.Pervasive;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.Collection;
import java.util.LinkedList;

import org.apache.http.HttpResponse;
import org.apache.http.client.ClientProtocolException;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.entity.StringEntity;
import org.apache.http.impl.client.DefaultHttpClient;
import org.json.JSONException;
import org.json.JSONObject;
import org.restlet.data.MediaType;
import org.restlet.representation.Representation;
import org.restlet.representation.StringRepresentation;
import org.restlet.resource.ClientResource;

public class MsgDispatcher {

	public static final int MESSAGE_TYPE_FIRE = 0;
	public static final int MESSAGE_TYPE_DEFAULT = 1;
	
	private static HttpClient httpClient = new DefaultHttpClient();
	private static HttpPost httpPost;
	private static HttpResponse response;
	
	private static final String BASE_URL = "http:146.169.36.125:8080/energy-data-service/";
	private static final String DATA = "data";
	private static final String EVENT = "event";
	private static final String COUCH_DB_URL = "http://146.169.36.132:5984/sensor_readings/";
	
		  
	private Collection<SensorData> sensorData;
	private JSONObject dataJSON;
    private	JSONObject resultJSON;
	private boolean isOk;
	private String errorCode;
	private String errorMessage;
	private static long id = 0;
	  
	public void sendDataToVisualiser(SensorData message, int eventType) {
	    
	    sensorData = new LinkedList<SensorData>();
	    sensorData.add(message);
	    switch(eventType) {
		    case(MESSAGE_TYPE_FIRE): {
		    	httpPost = new HttpPost(BASE_URL);
		    	dataJSON = SensorData.buildFireEventJSON();
		    	break;
		    }
		    default: {
		    	httpPost = new HttpPost(BASE_URL);
		    	dataJSON = SensorData.buildSensorDataJSON(sensorData); 
		    	break;
		    }
	    }

	    // Send JSON to visualiser
	    httpPost.addHeader("Content-type","application/json");
	    httpPost.addHeader("Accept","application/json");
	    StringEntity se = null;
		try {
			System.out.println("Sending the following json to visualizer: " + dataJSON.toString());
			se = new StringEntity(dataJSON.toString());
		} catch (UnsupportedEncodingException e1) {
			e1.printStackTrace();
		}
	    httpPost.setEntity(se);
	    
	    // Parse response
	    try {
			response = httpClient.execute(httpPost);
		} catch (ClientProtocolException e1) {
			e1.printStackTrace();
		} catch (IOException e1) {
			e1.printStackTrace();
		}	    

	    BufferedReader buffReader = null;
	    String json = "";
		try {
			buffReader = new BufferedReader(new InputStreamReader(response.getEntity().getContent(), "UTF-8"));
			json = buffReader.readLine();
		} catch (UnsupportedEncodingException e1) {
			e1.printStackTrace();
		} catch (IllegalStateException e1) {
			e1.printStackTrace();
		} catch (IOException e1) {
			e1.printStackTrace();
		}

	    //JSONTokener tokener = new JSONTokener(json);
	    try {
			resultJSON = new JSONObject(json);
			isOk = resultJSON.getBoolean("OK");
			System.out.println("Received response isOk (visualizer): " + isOk);
			if(!isOk) {
				errorCode = resultJSON.getString("errorCode");
				errorMessage = resultJSON.getString("errorMessage");
				System.out.println(errorCode + ": " + errorMessage);
			}
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	public void sendSensorDataToCouchDB(SensorData message) {
		JSONObject json = message.buildSensorDataJSONForCouchDB();
		System.out.println("Sending the following json to couchDb: " + json.toString());
		Representation request = new StringRepresentation(json.toString(),MediaType.APPLICATION_JSON);
		ClientResource client = new ClientResource(COUCH_DB_URL + "/" + id);
		id++;
		Representation r = client.put(request);
	    try {
			System.out.println("Received response(couchDB):" + r.getText());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
