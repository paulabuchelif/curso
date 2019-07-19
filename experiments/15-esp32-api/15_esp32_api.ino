#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Emprendedores";
const char* password = "AxtVvm13";

void connectToNetwork() 
{
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Tratando de establecer conexión...");
    }
    Serial.println("Conexión establecida :D");
}


void setup()
{
    Serial.begin(115200);
    delay(1000);
    //WiFi.begin(ssid, password); procedimiento de conexion
    connectToNetwork(); //hasta aqui conectado a internet
}

void loop()
{
    if (WiFi.status() == WL_CONNECTED)
    {
        HTTPClient http;
        // abre la conexion:
        http.begin("https://iot-course-a2bfd.firebaseio.com/data.json"); //indica a donde queremos conectarnos: en este caso al api rest de firebase
        http.addHeader("Content-Type", "text/plain"); //propiedades de los datos , mas util para peticion de creacion
        int httpCode = http.POST("{\"nombre\":\"karen\"}");//post indica crear algo
        //int httpCode = http.GET();

        //vamos a ver que trajo ese GET
        if (httpCode >= 200 && httpCode <=206) //indica que estuvo correcto
        {
            String payload = http.getString();
            Serial.println(httpCode);
            Serial.println(payload);
        }
        else
        {
            Serial.println(httpCode);
            Serial.println("error en la peticion...");
        }
        
        //es necesario cerrar la comunicacion despues de hacer la peticion:
        http.end();
    }
    delay(10000); //hara la peticion cada 10 segs
    
}