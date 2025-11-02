#include <Arduino.h>
#include "ultrasonic_utils.h"

int TRIG_PIN;
int ECHO_PIN;

void setupUltrasonic(int trigPin, int echoPin) {
  TRIG_PIN = trigPin;
  ECHO_PIN = echoPin;
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

int getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);
  if (duration == 0) return -1; 

  int distance = duration * 0.034 / 2;
  return distance;
}
