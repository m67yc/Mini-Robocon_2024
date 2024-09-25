#pragma once
#include "Arduino.h"

class Potentiometer{

    private:
        const uint8_t m_pin_potentiometer;

    public:
        Potentiometer(uint8_t pin_potentiometer);
        uint16_t getValue();
        uint8_t getMoterMap();
        uint8_t getSwitchMap();

};