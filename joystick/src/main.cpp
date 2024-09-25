#include <Arduino.h>
#include "Joystick_309.h"

// Consider the function should return the value or not


Joystick joystick(A1,A2);

void setup() {

}

void loop(){
    
    // joystick.setDeadZoneX();
    // joystick.setDeadZoneY();
    joystick.showRawValue();
    joystick.showMapValue();
    Serial.println();

}