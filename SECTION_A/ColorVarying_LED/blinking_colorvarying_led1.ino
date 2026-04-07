// C++ code

#define DigPinG 11
#define DigPinB 10
#define DigPinR 9
#define AnaPin A0
#define Tr 2

bool LEDState = LOW;
unsigned long previous_time = 0;

void setup()
{
  pinMode(DigPinG, OUTPUT);
  pinMode(DigPinB, OUTPUT);
  pinMode(DigPinR, OUTPUT);
  pinMode(Tr, OUTPUT);
}

void loop()
{
  int val = analogRead(AnaPin);
  int bound1 = 1023/3;
  int bound2 = 2*1023/3;
  
  int delay = map(val, 0, 1023, 100, 1000);
  unsigned long current_time = millis();
  
  if (current_time - previous_time >= delay){
    previous_time = current_time;
    LEDState = !LEDState;
    digitalWrite(Tr , LEDState);
  }
  
  
  if (val<bound1){
    digitalWrite(DigPinB, LOW);
    analogWrite(DigPinR, 255 - val*255/bound1);
    analogWrite(DigPinG, val*255/bound1);
  }
  
  else if (val<bound2){
    val -= bound1;
    digitalWrite(DigPinR, LOW);
    analogWrite(DigPinG, 255 - val*255/bound1);
    analogWrite(DigPinB, 255*val/bound1);
  }
  
  else{
    val -= bound2;
    digitalWrite(DigPinG, LOW);
    analogWrite(DigPinR, 255*val/bound1);
    analogWrite(DigPinB, 255 - 255*val/bound1);
  }
}