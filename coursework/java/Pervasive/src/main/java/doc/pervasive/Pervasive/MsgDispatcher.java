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
	
	private static final String BASE_URL = "http:146.169.36.125:8080/energy-data-service/";
	private static final String DATA = "data";
	private static final String EVENT = "event";
	private static final String COUCH_DB_URL = "http://146.169.36.132:5984/sensor_readings/";

	private static long id = 0;	

	private HttpClient httpClient;
	private HttpPost httpPost;
	private HttpResponse httpResponse;
	private Collection<SensorData> sensorData;
	private JSONObject dataJSON;
    private	JSONObject resultJSON;
	private boolean isOk;
	private String errorCode;
	private String errorMessage;

	public MsgDispatcher() {
		httpClient = new DefaultHttpClient();
	}
	
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

	    StringEntity stringEntity = null;
		try {
			System.out.println("Sending the following json to visualizer: " + dataJSON.toString());
			stringEntity = new StringEntity(dataJSON.toString());
		} catch (UnsupportedEncodingException e) {
			System.out.println("Cannot create StringEntity");
			e.printStackTrace();
		}
		
	    httpPost.setEntity(stringEntity);
	    
	    // Parse response
	    try {
			httpResponse = httpClient.execute(httpPost);
		} catch (ClientProtocolException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}	    

	    BufferedReader buffReader = null;
	    String json = "";
		try {
			buffReader = new BufferedReader(new InputStreamReader(httpResponse.getEntity().getContent(), "UTF-8"));
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
		System.out.println("Sending the following json to CouchDB: " + json.toString());

		Representation request = new StringRepresentation(json.toString(), MediaType.APPLICATION_JSON);
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
