# Ultrasonic_sensor_simulation


I designed an electronic circuit to control the reception robot, the robot aims to interacts with the user so that it welcomes him by moving its hands and interacting through its face, after that the user will chat with the robot (chatbot), at the end the robot asks the user to evaluate his performance.

<p align="center"><img src="https://user-images.githubusercontent.com/85819577/127908850-3deb6aae-aef2-4c32-b79a-c398627af06c.png" width="350" height="250" /></p>


This electrical circuit enables the robot to sense the presence of a human at a distance of 100 cm or less, if it senses the presence of a human, the robot's screen will turn on and the robot will move its hands in a certain movement.

In other words, the ultrasonic sensor senses someone at a distance of 100 cm or less than then it gives a signal to the servo motors to move with a certain movement, and also gives a signal to the bluetooth module to send a bluetooth message to turn on the screen.

# circuit components:

1- arduino microcontroller

**2- bluetooth module**
<p align="left"><img src="https://user-images.githubusercontent.com/85819577/128101659-35e023f2-564e-4502-a290-155cfe0b8c62.png" width="190" height="180" /></p>

**(instead i used a led and connect it to the arduino just to show that the led will turn on when a human become around the robot).**

**The bluetooth module contains four pins (VCC, GND, RX, TX) same as the arduino controller. To connect them together link the VCC pin to the 5V pin on arduino and GND pin to the GND pin, then connects the RX pin of the bluetooth module to the TX pin of the arduino, and TX pin of the bluetooth module to the RX pin of the arduino, then program the bluetooth module.**

3- breadboard

4- ultrasonic sensor

5- servo motors

The robot hands are supposed to perform a certain movement, but I only made the motors move to an angle of 90 without making a certain movement just to make sure the ultrasonic sensor works well.


#
https://user-images.githubusercontent.com/85819577/128099644-963bdb51-b6ac-472a-9580-4cb6a15f8c54.mp4





