#include "heat_resistor.h"

HRmod heat1(/*recv_pin = */PA5,/*max_val = */4095);

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.print("Temperature: ");
    Serial.print(heat1.value());
    Serial.println(" ℃");
}