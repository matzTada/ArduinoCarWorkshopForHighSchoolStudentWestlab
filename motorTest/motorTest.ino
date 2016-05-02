/*
 2015/8/26
 Tadanori Matsui

シリアルモニタに入力した数字をサーボモータに書き込むプログラム
*/

#include <Servo.h>

Servo servo;

void setup()
{
  Serial.begin(9600);
  servo.attach(3);
  servo.write(90);
  delay(1000);
}

void loop()
{
  int count = 0;
  char str[256];
  if (Serial.available()) {
    do {
      if (Serial.available()) { 
        str[count] = Serial.read();
        //      Serial.println(str[count]);
        count++;
      }
      if (count > 250) break;
    } while (str[count - 1] != 0x0A);
    str[count] = '\n';

    Serial.print("I received: "); // 受信データを送りかえす

    String motorStr = "";
    for (int i = 0; i < count; i++) {
      motorStr += str[i];
    }

    Serial.print(motorStr);

    int motorInt = motorStr.toInt();
    if (0 <= motorInt && motorInt <= 179) {
      servo.write(motorInt);
    } else {
      Serial.println("I cannot do it on a servo motor.");
    }

  }
}
