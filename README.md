Robotic Prosthetic Hand

1. Introduction

This project outlines the design and implementation of a robotic prosthetic hand that mimics the functionality of a human hand. The system utilizes flex sensors integrated into a glove to capture finger bending movements. These sensor signals are processed by an Arduino Uno microcontroller, which then controls servo motors to actuate the corresponding fingers of the prosthetic hand.

Stimulation link : https://www.tinkercad.com/things/76D8xAaATrd-robotic-arm-

2. Project Setup

Clone this repository:

Open your terminal or command prompt.
Use the following command to clone the repository:

git clone https://github.com/m-nayab/Bionic-Arm-with-arduino.git
Hardware: Assemble the prosthetic hand using the provided components: Arduino Uno, servo motors, flex sensors, glove, and supporting electronics.

Software:

Open the Arduino IDE.
Open the robotic_arm_1.ino file from the cloned repository.
Upload the code to the Arduino Uno.
3. Hardware Components

Microcontroller: Arduino Uno
Sensors: Flex sensors (number and placement depending on desired functionality)
Actuators: Servo motors (number and type depending on desired functionality)
Power Supply: Specify power source, e.g., batteries, external power supply
Glove
Prosthetic Hand
Resistors
Jumper wires

![arm](https://github.com/user-attachments/assets/39434dc2-4920-41a1-b516-4ef153687635)


4. Software Components

Programming Language: C++
Software Structure:
Sensor Data Acquisition: Read analog signals from flex sensors.
Signal Processing: Process sensor data to determine finger bending angles.
Servo Control: Calculate and send appropriate signals to servo motors to actuate the prosthetic hand.
Libraries: Arduino libraries for servo motor control and analog reading.

5. Working

Flex Sensor Interaction: When a user bends a finger, the corresponding flex sensor experiences a change in resistance.
Sensor Data Acquisition: The Arduino Uno reads the analog signal from the flex sensor.
Signal Processing: The microcontroller processes the analog signal to determine the degree of finger bending. This often involves mapping the raw sensor readings to a corresponding angle.
Servo Motor Control: Based on the calculated finger bending angle, the microcontroller sends a signal to the corresponding servo motor.
Prosthetic Hand Movement: The servo motor rotates to a position that corresponds to the desired finger position, effectively mimicking the user's hand movement.

6. Control System

Sensor-based Control:
Flex sensors measure the bending of fingers on the user's hand.
The Arduino processes the sensor data and maps it to corresponding servo motor positions.
Servo motors actuate the prosthetic hand fingers accordingly, mimicking the user's hand movements.
