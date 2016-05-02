/*
 2015/8/26
 Tadanori Matsui

サーボモータ三つをランダムで動かすプログラム
*/

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
  //servo2.attach(5);
  //servo3.attach(11);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  delay(1000);
}

void loop()
{
  //count++;
  //if(count >= 180) count = 0;
  int angle1 = random(0, 180);
  int angle2 = random(0, 180);
  int angle3 = random(0, 180);

  Serial.print(" angle1: ");
  Serial.print(angle1);
  Serial.print(" angle2: ");
  Serial.print(angle2);
  Serial.print(" angle3: ");
  Serial.print(angle3);
  Serial.println();

  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);

  delay(250);
}
