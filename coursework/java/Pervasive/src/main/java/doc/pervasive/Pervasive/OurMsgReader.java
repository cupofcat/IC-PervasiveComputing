package doc.pervasive.Pervasive;

import java.util.*;

import net.tinyos.message.*;
import net.tinyos.packet.*;
import net.tinyos.util.*;

public class OurMsgReader implements net.tinyos.message.MessageListener {

	public static final String INFO = "INFO: ";
	public static final String ERROR = "ERROR: ";

	private MoteIF moteIF;
	public MsgDispatcher dispatcher;
  
	public OurMsgReader() {
		this.dispatcher = new MsgDispatcher(0);
	}
	
	public OurMsgReader(String source) throws Exception {
		this.dispatcher = new MsgDispatcher(0);
		if (source != null) {
			moteIF = new MoteIF(BuildSource.makePhoenix(source, PrintStreamMessenger.err));
		}
		else {
			moteIF = new MoteIF(BuildSource.makePhoenix(PrintStreamMessenger.err));
		}
	}

	/**
	 * At the moment we're never sending Lux to the visualizer
	 */
	public void messageReceived(int to, Message message) {
		int eventType = MsgDispatcher.MESSAGE_TYPE_DATA;
		SensorData sensorData = new SensorData((SensorMsg) message);
		System.out.println(INFO + "Message Received!");
		System.out.println(INFO + "Temperature: " + sensorData.getTemp());
		System.out.println(INFO + "Lux: " + sensorData.getLux());
		System.out.println("#######################################");
	
		if(sensorData.getEventType() != MsgDispatcher.MESSAGE_TYPE_FIRE) {
			dispatcher.sendSensorDataToCouchDB(sensorData);
		} else if (sensorData.fireDetected(sensorData.getTemp())) {
			eventType = MsgDispatcher.MESSAGE_TYPE_FIRE;
		}
		dispatcher.sendDataToVisualiser(sensorData, eventType, true);
	}

	private static void usage() {
		System.err.println("usage: MsgReader [-comm <source>] message-class [message-class ...]");
	}

	private void addMsgType(Message msg) {
		moteIF.registerListener(msg, this);
	}
  
	public static void main(String[] args) throws Exception {
		String source = null;
		Vector<Message> v = new Vector<Message>();
		
		if (args.length > 0) {
			for (int i = 0; i < args.length; i++) {
				if (args[i].equals("-comm")) {
					source = args[++i];
				}
				else {
					String className = args[i];
					try {
						Class c = Class.forName(className);
						Object packet = c.newInstance();
						Message msg = (Message)packet;
						if (msg.amType() < 0) {
							System.err.println(className + " does not have an AM type - ignored");
						}
						else {
							v.addElement(msg);
						}
					} catch (ClassNotFoundException e) {
						System.out.println(ERROR + "Wrong class name!");
						e.printStackTrace();
						return;
					}
				}
			}
		}
		else if (args.length != 0) {
			usage();
			System.exit(1);
		}

		MsgReader msgReader = new MsgReader(source);
		Enumeration<Message> msgs = v.elements();
		while (msgs.hasMoreElements()) {
			Message m = (Message)msgs.nextElement();
	//		msgReader.addMsgType(m);
		}
	}

}
