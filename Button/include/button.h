#pragma once
#include "Arduino.h"

class Button{

    private:
        const uint8_t m_pin_button;

        uint16_t m_speed;
        uint8_t m_direction;
        uint8_t m_mode;

        
    public:
        Button(const uint8_t pin_button);
        bool readValue();
        uint16_t setSpeedValue(uint16_t speed, uint8_t mode);
        uint8_t setDirectionValue(uint8_t direction, uint8_t mode);
        //...

};