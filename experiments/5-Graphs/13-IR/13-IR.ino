#include "IRLremote.h"
#define LED_BUILTIN  13
//variables para recibir los datos del control
const int interruptIR = 0;
uint8_t IRProtocol = 0; //entero sin signo de 8 bits
uint16_t IRAddres = 0; //entero de 16 bits sin signo
uint32_t IRCommand = 0; //alojar comandos del control remoto

void setup()
{
    Serial.begin(115200); //vel de comunicacion
    pinMode(5, INPUT);
    //funcion preestablecida de la libreria
    IRLbegin<IR_ALL>(interruptIR);
}

void loop()
{
    uint8_t oldSREG = SREG;
    cli(); //inicio a la lectura de infrarrojo, definida en la libreria
    if (IRProtocol)
    {
        Serial.print(IRCommand); //formato en hexadecimal 0x02F9
    }
    
    
}
