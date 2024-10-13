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