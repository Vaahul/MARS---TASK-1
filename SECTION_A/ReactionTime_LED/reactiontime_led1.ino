// C++ code

const int LED = 2;
const int Push = 4;

int prev = 0;
int led_on = 0;
unsigned long ontime = prev + random(1000, 5000);

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(Push, INPUT_PULLUP);
}

void loop()
{
  unsigned long time = millis();
  
  if (!led_on){
    if (time>=ontime){
      digitalWrite(LED, HIGH);
      led_on = 1;
    }
  }
  
  else if (led_on){
    if (digitalRead(Push)==LOW){
      digitalWrite(LED, LOW);
      Serial.println(time - ontime);
      led_on = 0;
      ontime = time + random(1000, 5000);
    }
  }
}