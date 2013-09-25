#include <Servo.h>

Servo engineer;

void setup()
{
engineer.attach (5);
}

void loop ()
{
  for(int angle =0; angle < 180; angle++){
    engineer.write(angle);
    delay(10);
  }
}
