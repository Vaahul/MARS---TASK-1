const int trigPin = 2;
const int echoPin = 7;
const int motorPin = 9;

unsigned long duration;
float distance;
int speed;

unsigned long lastReadTime = 0;
int interval = 100;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - lastReadTime >= interval) {
    lastReadTime = currentTime;

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH, 30000);
    distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.println(distance);

    
    if (distance < 20) {
      speed = 0;
    } 
    else if (distance > 150){
      speed = 255; 
    }
    else {
      speed = map(distance, 20, 150, 120, 255);
    }

    analogWrite(motorPin, speed);
    }
}

