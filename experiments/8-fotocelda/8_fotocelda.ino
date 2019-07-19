unsigned long Time;
int led_inten = 0;
int analog = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(10, OUTPUT);
}
void loop()
{
    Time = millis();
    while (millis() <= Time + 1000)
    {
        analog = analogRead(A5);
        analog = analog - 245;
        led_inten = 255 - analog;
        analogWrite(10, abs(led_inten));
    }
    Serial.println(analog); 
}