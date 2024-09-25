#pragma once
#include "Arduino.h"

class Button{

    private:
        const uint8_t m_pin_button;

        
    public:
        Button(const uint8_t pin_button);
        bool readValue();
        uint16_t getSpeedValue(uint16_t speed, uint8_t mode);
        //...

};