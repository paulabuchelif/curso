#include <BluetoothSerial.h>
#define LED_BUILTIN 2

BluetoothSerial bluetooth;
int incoming = 0;

void setup () 
{
    Serial.begin(115200);
    bluetooth.begin("hello from ESP32 :");
    Serial.println("listo para vincular");
    

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    if (bluetooth.available())
    {
        incoming = bluetooth.read();
        Serial.print("Mensaje: ");
        Serial.print(incoming);

        switch (incoming)
        {
        case 49:
            digitalWrite(LED_BUILTIN, LOW);
            break;
        case 48:
            digitalWrite(LED_BUILTIN, HIGH);
            break;
        default:
            break;
        }

    }

    delay(20);
}
