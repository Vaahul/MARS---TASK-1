# Blinking LED

## Components Used:
1. LEDs
2. Resistors - 220/100 ohms
3. jumper wires
4. Arduino UNO
5. breadboard

## Working Principle:
The LEDs are connected to the digital I/O pins of the Arduino circuit board and grounded using resistors. 
The I/O Pins provide a pulse when triggered and the logic behind the trigger is coded accordingly. Every 500ms the state of the LED1 
inverts, same for 2 and 3 at 1000 and 1500 ms. It is implemented using IF condition and the VOID LOOP. 
