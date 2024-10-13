void stopmotor(){
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 analogWrite(A5,0);
}