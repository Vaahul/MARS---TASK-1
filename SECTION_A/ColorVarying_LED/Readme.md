# Color Varying LED

## Components Used:

1. Potentiometer
2. Transistor
3. Resistors
4. RGB LED
5. Arduino UNO
6. Bread board

## Working Principle

The voltage across the potentiometer pins is measured using analogRead() function which returns a 10bit value 
of range: [0, 1023]. This reading is then divided into 3 main color idea, where 1 color of RGB would be absent in each. 
The other two will vary inversely. Also Blinking is implemented from the same potentiometer input, the delay being mapped using map().
A transistor is used to switch the LED ON and OFF (for blinking) using a single pin in the cricuit.
