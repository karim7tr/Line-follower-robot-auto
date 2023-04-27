# Line-follower-robot-auto
this project is one of project that I work on it in the FABLAB "Research Laboratory at University Of Bechar"


This is a code for a robot with two sensors (left and right) and two motors (left and right) to navigate a black line on a white background. 

The code begins by defining the pins for the left and right sensors (IN1 and IN4, respectively) and the pins for the two motors (GA and GB for the left motor, DA and DB for the right motor). The setup function initializes the serial communication and sets the pin modes for all the pins.

There are three functions defined in the code: g(), d(), and av(). The g() function turns the robot left by setting the right motor to high speed and the left motor to low speed. The d() function turns the robot right by setting the left motor to high speed and the right motor to low speed. The av() function makes the robot go straight by setting both motors to high speed.

In the loop function, the code reads the values of the left and right sensors (in1_val and in4_val, respectively) using the digitalRead function. If the left sensor detects black and the right sensor detects white, the robot turns left using the g() function. If the right sensor detects black and the left sensor detects white, the robot turns right using the d() function. If both sensors detect black or white, the robot continues straight using the av() function. 

The Serial.println() function is used to print out messages to the serial monitor for debugging purposes.
