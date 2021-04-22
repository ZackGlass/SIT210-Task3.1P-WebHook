// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

DHT dht(D5, DHT11);

float temp;
String data;

void setup() {
    
    Serial.begin(9600);
    dht.begin();

}

void loop() {
    
    
    //Reading data from the sensor
    temp = dht.getTempCelcius();
    data = String(temp);

    //Integration trigger
    Particle.publish("temp", data, PRIVATE);

    // Gap between readings.
    delay(30000);
    


}