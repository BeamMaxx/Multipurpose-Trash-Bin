#include <Wire.h>
#include <HUSKYLENS.h>
#include <Servo.h>

HUSKYLENS huskyLens;

Servo Servo1, Servo2, Servo3, Servo4;

void setup() {
  pinMode(7, OUTPUT); // motor
  pinMode(8, OUTPUT); // motor
  pinMode(A5, OUTPUT); // motor
  
  Wire.begin();
  
  if (!huskyLens.begin(Wire)) {
    while (1);
  }

  Servo1.attach(9);
  Servo2.attach(10);
  Servo3.attach(11);
  Servo4.attach(12);

  huskyLens.writeAlgorithm(ALGORITHM_TAG_RECOGNITION);
  
  Servo1.write(90);
  Servo2.write(90);
  Servo3.write(90);
  Servo4.write(90);
}

void loop() {
  if (analogRead(A8) < 255) {
    Servo4.write(180);
    if (huskyLens.request()) {
      if (huskyLens.available()) {
        HUSKYLENSResult result = huskyLens.read();
        if (result.command == COMMAND_RETURN_BLOCK) {
          if (result.ID == 1) {
            Servo1.write(0);
            beltID1(0);
          }if (result.ID == 2) {
            Servo2.write(0);
            beltID2(0);
          }if (result.ID == 3) {
            Servo3.write(0);
            beltID3(0);
          } else {
            stopmotor(100);//////Un know type/////////
          }
        }
      }
    }
  } else {Servo4.write(0);}
}
void beltID1(int speed){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,speed);
  if (analogRead(A1) < 255) {
    while (1) {
      stopmotor();
    }
  }
}
void beltID2(int speed){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,speed);
  if (analogRead(A2) < 255) {
    while (1) {
      stopmotor();
    }
  }
}
void beltID3(int speed){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,speed);
  if (analogRead(A3) < 255) {
    while (1) {
      stopmotor();
    }
  }
}
void run(int speed){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,-speed);
  if (analogRead(A8) < 255) {
    while (1) {
      stopmotor();
    }
  }
}
void stopmotor(){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,0);
}
