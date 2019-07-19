 //transistor y rele
const int transistor = 9;
char state = ' ';

 void setup()
 {
     pinMode(transistor, OUTPUT);
     Serial.begin(9600);
 }
 void loop()
 {
    //  digitalWrite(transistor, HIGH);
    //  delay(2000);
    //  digitalWrite(transistor, LOW);
    //  delay(2000);
    // for (int i = 0; i < 255; i++)
    // {
    //     analogWrite(transistor, i);
    //     delay(15);
    // }
    state = Serial.read();
    if (state == '1')
    {
        digitalWrite(transistor, HIGH);
    }
    else
    {
        digitalWrite(transistor, LOW);
    }
    Serial.print(state);
    
 }