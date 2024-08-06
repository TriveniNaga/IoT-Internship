#include<Servo.h>
Servo s;
void setup() {
  // put your setup code here, to run once:
pinMode(5, INPUT);
pinMode(6, INPUT);
s.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a=digitalRead(5);
int b=digitalRead(6);
if(a==0){
  Serial.println("Morning..!");
  for(int angle=0;angle<=180;angle++){
    s.write(angle);
    delay(1000);
  }
}
 if(b==0){
  Serial.println("Evening..!");
  for(int angle=180;angle>=0;angle--){
    s.write(angle);
    delay(1000);
  }
}
 if(a==0&&b==0){
  Serial.println("Afternoon...!");
  s.write(90);
   delay(1000);
}
}
