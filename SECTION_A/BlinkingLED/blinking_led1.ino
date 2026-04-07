// C++ code

const int LED1 = 4;
const int LED2 = 2;
const int LED3 = 3;

int prev1 = 0;
int prev2 = 0;
int prev3 = 0;
int OP1 = LOW;
int OP2 = LOW;
int OP3 = LOW;
  
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()
{
  int val = millis();
  
  if (val-prev1>=500){
    prev1 = val;
    OP1 = !OP1;
    digitalWrite(LED1, OP1);
  }
  
  if (val-prev2>=1000){
    prev2 = val;
    OP2 = !OP2;
    digitalWrite(LED2, OP2);
  }
  
  if (val-prev3>=1500){
    prev3 = val;
    OP3 = !OP3;
    digitalWrite(LED3, OP3);
  }
  
}