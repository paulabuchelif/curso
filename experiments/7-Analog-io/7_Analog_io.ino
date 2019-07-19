unsigned long Time;
int n = 0;
int analog = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}
void loop()
{
    Time = millis();
    while (millis() <= Time + 1000)
    {
        analog = analogRead(A5);
        n++;
    }

    Serial.print(n);
    Serial.print(",");
    Serial.println(analog);

    int i = analog;
    
}