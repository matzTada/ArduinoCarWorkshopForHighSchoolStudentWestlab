/*
 2015/8/26
 Tadanori Matsui

シリアルモニタに入力した数字をサーボモータに書き込むプログラム
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
void setup()
{
  Serial.begin(9600);
  servo1.attach(3);
  servo1.write(90);
  servo2.attach(5);
  servo2.write(90);
  servo3.attach(11);
  servo3.write(90);
  delay(1000);
}

void loop()
{
  servo1.write(60);
  servo2.write(random(0, 179));
  servo3.write(random(0, 179));
  delay(500);
  servo1.write(179);
  servo2.write(random(0, 179));
  servo3.write(random(0, 179));
  delay(500);
}
