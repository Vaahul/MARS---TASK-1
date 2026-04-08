# Adaptive Cruise Control

## Components Used: 

1. 9V battery
2. HC-SR04 Ultrasonic depth sensor
3. DC Motor
4. NPN transistor
5. Resistors
6. Jumper Wires
7. Arduino UNO
8. Bread board

## Working Principle

A 10 microsecond HIGH Pulse is provided to the Ultrasonic sensor to trigger it. Once triggered it sends HIGH signal in its Echo pin. 
The duration is as long as it takes for the emitted waves to return back. And the duration is read using PulseIn(). 
The distance is found using the duration with the help of the speed of sound. The distance, when applied upon logic is 
used to control the speed of the motor (rpm). A transistor is used and the speed is controlled by controlling thecurrent through the base. 
This acts as a motor driver. A 9V battery powers the motor. 
