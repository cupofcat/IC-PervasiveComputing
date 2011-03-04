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

	private static HttpClient httpClient = new DefaultHttpClient();
	private static HttpPost httpPost = new HttpPost("http:146.169.36.125:8080/energyData/data");
	private static HttpResponse response;
	private static final String COUCH_DB_URL = "http://http://146.169.36.132/:5984/sensor_readings/";
	private static final int MESSAGE_TYPE_FIRE = 0;
		  
	private Collection<SensorMsg> sensorData;
	private JSONObject dataJSON;
    private	JSONObject resultJSON;
	private boolean isOk;
	private String errorCode;
	private String errorMessage;
	  
	public void sendMessageToVisualiser(SensorMsg message) {
	    
	    sensorData = new LinkedList<SensorMsg>();
	    sensorData.add(message);
	    switch(message.get_event_type()) {
		    case(MESSAGE_TYPE_FIRE): {
		    	dataJSON = SensorData.buildFireEventJSON();
		    	break;
		    }
		    default: {
		    	dataJSON = SensorData.buildSensorDataJSON(sensorData); 
		    	break;
		    }
	    }
	    dataJSON = SensorData.buildSensorDataJSON(sensorData);
	    
	    // Send JSON to visualiser
	    httpPost.addHeader("Content-type","application/json");
	    httpPost.addHeader("Accept","application/json");
	    StringEntity se = null;
		try {
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
			if(!isOk) {
				errorCode = resultJSON.getString("errorCode");
				errorMessage = resultJSON.getString("errorMessage");
				System.out.println(errorCode + ": " + errorMessage);
			}
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	public void sendMessageToCouchDB(SensorMsg message) {
		JSONObject json = SensorData.buildSensorDataJSONForCouchDB(message);
		Representation request = new StringRepresentation(json.toString(),MediaType.APPLICATION_JSON);
		ClientResource client = new ClientResource(COUCH_DB_URL);
		Representation r = client.put(request);
	    try {
			r.getText();
		} catch (IOException e) {
			e.printStackTrace();
		} 
	}
}
