int LED = 10;
int BUTTON = 6;
bool state = true;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
    Serial.begin(9600);
    
}
void loop()
{
    state = digitalRead(BUTTON);
    Serial.print(state);
    if (state == false)
    {
        digitalWrite(LED, HIGH);
    }
    else
    {
        digitalWrite(LED, LOW);
    }
    
    
}