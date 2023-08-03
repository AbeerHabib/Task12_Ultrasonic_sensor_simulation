## Triggering servo motors and led using ultrasonic sensor


I've designed an electronic circuit to control the reception robot, which aims to interact with users by welcoming them through hand movement and facial exxpressions. The robot's functionality includes engaging in a chatbot conversation with the user and concluding by requesting an evaluation of its performance.

<p align="center"><img src="https://user-images.githubusercontent.com/85819577/127908850-3deb6aae-aef2-4c32-b79a-c398627af06c.png" width="350" height="250" /></p>


The electrical circuit I developed enables the robot to detect the presence of a human within a distance of 100 cm or less. When a human is detected, the robot's screen turns on, and its hands perform a specific movement. This is achieved using an ultrasonic sensor that senses the proximity of a person within the specified range. Upon detection, the sensor sends a signal to the servo motors to execute a predetermined movement. Additionally, a signal is sent to the Bluetooth module to transmit a Bluetooth message, which activates the robot's screen.

# circuit components:

1- arduino microcontroller

**2- bluetooth module**
<p align="left"><img src="https://user-images.githubusercontent.com/85819577/128101659-35e023f2-564e-4502-a290-155cfe0b8c62.png" width="190" height="180" /></p>

**(Note: Instead of using the Bluetooth module, a LED was employed to demonstrate the activation when a human is detected).**

**The bluetooth module contains four pins (VCC, GND, RX, TX) same as the arduino controller. To connect them together link the VCC pin to the 5V pin on arduino and GND pin to the GND pin, then connects the RX pin of the bluetooth module to the TX pin of the arduino, and TX pin of the bluetooth module to the RX pin of the arduino, then program the bluetooth module.**

3- breadboard

4- ultrasonic sensor

5- servo motors

The robot hands are supposed to perform a certain movement, but I only made the motors move to an angle of 90 without making a certain movement just to make sure the ultrasonic sensor works well.


#
https://user-images.githubusercontent.com/85819577/128099644-963bdb51-b6ac-472a-9580-4cb6a15f8c54.mp4





