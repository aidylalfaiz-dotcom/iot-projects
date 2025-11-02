# 🤖 Wavino - Servo Distance Controller (IoT Project)

*Wavino* is an Arduino-based project that uses an *HC-SR04 ultrasonic sensor* to measure the distance of an object and automatically moves a *servo motor* according to the detected distance.

---

## ⚙ Features
- Measures object distance in real time using the HC-SR04 sensor.  
- Moves a servo motor based on distance readings.  
- Includes a timeout system to prevent the sensor from freezing.  
- Great for projects such as:
  - Automatic trash bins  
  - Small smart doors  
  - Mini parking assistant systems  

---

## 🧩 Components Used
- Arduino Uno (x1)  
- HC-SR04 ultrasonic sensor (x1)  
- SG90 servo motor (x1)  
- Breadboard (x1)  
- Jumper wires (several)  

---

## 🔌 Pin Connections
- HC-SR04 VCC → 5V on Arduino  
- HC-SR04 GND → GND on Arduino  
- HC-SR04 Trig → D3 on Arduino  
- HC-SR04 Echo → D2 on Arduino  
- Servo VCC (red) → 5V on Arduino  
- Servo GND (brown) → GND on Arduino  
- Servo Signal (orange) → D9 on Arduino  

See more details in the docs/wiring-guide.md file.

---

## 💻 Source Code
The main code is located in src/wavino.ino.

Example pin definitions:
```cpp
#define ECHO_PIN 2
#define TRIG_PIN 3
#define SERVO_PIN 9
