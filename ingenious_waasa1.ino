#include <Servo.h>

int position = 0;

int i = 0;

Servo servo_2;

Servo servo_6;

void setup()
{
  servo_2.attach(2);

  servo_6.attach(6);

}

void loop()
{
  for (position = 1; position <= 180; position += 1) {
    servo_2.write(position);
    servo_6.write(position);
    delay(25); // Wait for 25 millisecond(s)
  }
  for (position = 180; position <= 0; position += 1) {
    servo_2.write(position);
    servo_6.write(position);
    delay(25); // Wait for 25 millisecond(s)
  }
}