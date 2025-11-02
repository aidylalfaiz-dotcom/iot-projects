#include <Arduino.h>
#include <Servo.h>
#include "servo_utils.h"

Servo myServo;
int lastServoPos = 90; 

void setupServo(int servoPin) {
  myServo.attach(servoPin);
  myServo.write(lastServoPos);
}

void moveServoByDistance(int distance, int threshold) {
  if (distance <= 0 || distance > threshold) return;

  int servoPosition = map(distance, 2, threshold, 180, 0);
  servoPosition = constrain(servoPosition, 0, 180);

  lastServoPos = lastServoPos + (servoPosition - lastServoPos) * 0.3;
  myServo.write(lastServoPos);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | Servo: ");
  Serial.println(lastServoPos);
}
