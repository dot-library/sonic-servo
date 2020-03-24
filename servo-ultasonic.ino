#include <Servo.h>

int echoPin =12;
int trigPin =13;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo1.attach(9);
  servo2.attach(10)
}
void loop() {
  long duration;
  long distance;
  digitalWrite(trigPin, LOW);
  delay(5);
  digitalWrite(trigPin, HIGH);
  delay(5); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  if (distance < 4) { 
  servo1.write(90);
  servo2.write(90);
  delay(500);
  }
  else {
    servo1.write(0);
    servo2.write(0)
    delay(500);
 } 
 
}
