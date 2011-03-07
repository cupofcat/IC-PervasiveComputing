/*									tab:4
 * "Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY
 * PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS
 * DOCUMENTATION, EVEN IF THE UNIVERSITY OF CALIFORNIA HAS BEEN
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2005 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
/* Authors:	Phil Levis <pal@cs.berkeley.edu>
 * Date:        December 1 2005
 * Desc:        Generic Message reader
 *               
 */

/**
 * @author Phil Levis <pal@cs.berkeley.edu>
 */

package doc.pervasive.Pervasive;

import java.util.*;

import net.tinyos.message.*;
import net.tinyos.packet.*;
import net.tinyos.util.*;

public class MsgReader implements net.tinyos.message.MessageListener {

	public static final int MESSAGE_TYPE_DEFAULT = 1;
	public static final int MESSAGE_TYPE_POTENTIAL_FIRE = 0;

	private MoteIF moteIF;
	private MsgDispatcher dispatcher;
  
	public MsgReader() {
		this.dispatcher = new MsgDispatcher();
	}
	
	public MsgReader(String source) throws Exception {
		this.dispatcher = new MsgDispatcher();
		if (source != null) {
			moteIF = new MoteIF(BuildSource.makePhoenix(source, PrintStreamMessenger.err));
		}
		else {
			moteIF = new MoteIF(BuildSource.makePhoenix(PrintStreamMessenger.err));
		}
	}

	public void start() {
	}
  
	public void messageReceived(int to, Message message) {
		// Has to take values from MsgDispatcher.MESSAGE_TYPE_*
		int eventType = MsgDispatcher.MESSAGE_TYPE_DEFAULT;;
		SensorData sensorData = new SensorData((SensorMsg) message);
	  
		System.out.println("RECEIVED MESSAGE!");
		System.out.println(sensorData.getTemp());
		System.out.println(sensorData.getLux() + "******");
		
		if(sensorData.getEventType() != MESSAGE_TYPE_POTENTIAL_FIRE) {
			dispatcher.sendSensorDataToCouchDB(sensorData);
		} else if (sensorData.fireDetected(sensorData.getTemp())) {
			eventType = MsgDispatcher.MESSAGE_TYPE_FIRE;
		}
		dispatcher.sendDataToVisualiser(sensorData, eventType);
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
					}
					catch (Exception e) {
						System.err.println(e);
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
			msgReader.addMsgType(m);
		}
		msgReader.start();
	}
}
