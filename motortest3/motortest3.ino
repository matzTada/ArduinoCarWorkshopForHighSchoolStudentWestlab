#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int count = 0;

void setup()
{
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(11);
}

void loop()
{
  //      servo.write(count);
  //count++;
  //if(count >= 180) count = 0;
  servo1.write(179);
  //delay(5000);
  servo2.write(90);
  //delay(5000);
  servo3.write(90);
  delay(3000);  
  servo1.write(0);
  //delay(5000);
  servo2.write(0);
  //delay(5000);
  servo3.write(0);
  delay(3000);
}
