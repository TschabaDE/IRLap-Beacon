#include <Arduino.h>
#include <IRremote.hpp>

#define DISABLE_CODE_FOR_RECEIVER
#define NO_LED_FEEDBACK_CODE

const uint8_t Khz = 38;
const uint8_t IRCodeLength = 5;
const uint16_t IRCode[IRCodeLength] = {416, 1200, 416, 1200, 416};

void setup() {
    pinMode(3, OUTPUT);  
	digitalWrite(3, LOW);

    IrSender.begin(3);
}
   
void loop() {
    IrSender.sendRaw(IRCode, IRCodeLength, 38);
    delay(6);
}