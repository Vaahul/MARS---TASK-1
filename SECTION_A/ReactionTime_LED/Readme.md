# Reaction Time Tester

## Components Required: 

1. LED
2. Resistor
3. Pushbutton
4. Jumper Wires
5. Arduino UNO
6. Bread board

## Working Principle

The LED is connected to a Digital I/O pin which would give a 5V pulse randomly between the interval (1000, 5000) ms. 
Once the LED lights, a timer runs, and stops when the pushbutton is pressed. Its identified using Digital I/O pin's input. 
Input_Pullup is used to set the Input to a default high, when the pushbutton is pressed, it connects to the ground providing a LOW value. 
This is read for the reaction. The whole process resets once the button is pressed.
