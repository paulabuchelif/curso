#include <Servo.h>
Servo servo;
int angle = 0;
void setup()
{
    servo.attach(10);
}
void loop()
{
    //for (angle = 0; angle <= 180; angle++)
    //{
      //  servo.write(angle);
      //  delay(50);
    //}
    //for (angle = 180; angle <= 0; angle--)
    //{
    //    servo.write(angle);
    //    delay(50);
    //}    

    angle = map(analogRead(A5,0,1000,0,180));
    servo.write(angle);
    delay(50);
}