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
	public static final int MESSAGE_TYPE_DATA = 1;
	
	private static final String BASE_URL = 
			"http://146.169.36.125:8080/energy-data-service/energyData/";
	private static final String DATA = "data";
	private static final String EVENT = "event";
	private static final String COUCH_DB_URL = "http://146.169.36.132:5984/sensor_readings/";
	private static final String DEBUG = "DEBUG: ";
	private static final String ERROR = "ERROR: ";
	private static final String INFO = "INFO: ";

	private HttpClient httpClient;
	private Collection<SensorData> sensorData;
	private String errorCode;
	private String errorMessage;
	private ClientResource client;
	private int id = 0;
	
	public MsgDispatcher(int id) {
		this.httpClient = new DefaultHttpClient();
		this.client = new ClientResource(COUCH_DB_URL + id);
		this.id = id;
	}
		
	public void sendDataToVisualiser(SensorData message, int eventType, boolean noLux) {
		HttpPost httpPost = null;
		JSONObject dataJSON = null;
	    JSONObject resultJSON = null;
		
	    sensorData = new LinkedList<SensorData>();
	    sensorData.add(message);
	    switch(eventType) {
		    case(MESSAGE_TYPE_FIRE): {
		    	httpPost = new HttpPost(BASE_URL + EVENT);
		    	dataJSON = SensorData.buildFireEventJSON();
		    	break;
		    }
		    case (MESSAGE_TYPE_DATA): {
		    	httpPost = new HttpPost(BASE_URL + DATA);
		    	dataJSON = SensorData.buildSensorDataJSON(sensorData, noLux); 
		    	break;		   
		    }
		    default: {
		    	System.out.println(ERROR + "Uknown message type");
		    	return;
		    }
	    }

	    // Send JSON to visualiser
	    httpPost.addHeader("Content-Type","application/json");
	    httpPost.addHeader("Accept","application/json");

	    StringEntity stringEntity = null;
		try {
			System.out.println(INFO + "Sending the following json to visualizer: " +
					dataJSON.toString());
			stringEntity = new StringEntity(dataJSON.toString());
		} catch (UnsupportedEncodingException e) {
			System.out.println(ERROR + "Cannot create StringEntity");
			e.printStackTrace();
			return;
		}
		
	    httpPost.setEntity(stringEntity);
	    
	    // Parse response
	    HttpResponse httpResponse = null;
	    try {
			httpResponse = httpClient.execute(httpPost);
		} catch (ClientProtocolException e) {
			System.out.println(ERROR + "Error in the HTTP protocol");
			e.printStackTrace();
			return;
		} catch (IOException e) {
			System.out.println(ERROR + "Error while doing a Http POST");
			e.printStackTrace();
			return;
		}

	    BufferedReader buffReader = null;
	    String json = "";
		try {
			buffReader = new BufferedReader(new InputStreamReader(httpResponse.getEntity().getContent(), "UTF-8"));
			json = buffReader.readLine();
		} catch (UnsupportedEncodingException e) {
			System.out.println(ERROR + "Unsupported Encoding");
			e.printStackTrace();
			return;
		} catch (IllegalStateException e) {
			e.printStackTrace();
			return;
		} catch (IOException e) {
			System.out.println(ERROR + "Error while reading the reply");
			e.printStackTrace();
			return;
		}

		boolean responseOk = false;
	    try {
			resultJSON = new JSONObject(json);
			System.out.println(INFO + json);
			responseOk = resultJSON.getBoolean("OK");
			if(!responseOk) {
				errorCode = resultJSON.getString("errorCode");
				errorMessage = resultJSON.getString("errorMessage");
				System.out.println(ERROR + errorCode + ": " + errorMessage);
			}
		} catch (JSONException e) {
			System.out.println(ERROR + "Exception while parsing the reply");
			e.printStackTrace();
			return;
		}
	}

	/**
	 * To send data to the CouchDB instance we use restlet just to experiment
	 * more with it.
	 * @param message	the message to send to CouchDB
	 */
	public void sendSensorDataToCouchDB(SensorData message) {
		JSONObject json = message.buildSensorDataJSONForCouchDB();
		System.out.println(INFO + "Sending the following json to CouchDB: " + json);

		Representation request =
				new StringRepresentation(json.toString(), MediaType.APPLICATION_JSON);

		client.setReference(COUCH_DB_URL + id);
		id++;
		Representation r = client.put(request);
	    try {
			System.out.println(INFO + "Received response(couchDB):" + r.getText());
		} catch (IOException e) {
			System.out.println(ERROR + "Exception while sending data to CouchDB");
			e.printStackTrace();
		}
	}

}
