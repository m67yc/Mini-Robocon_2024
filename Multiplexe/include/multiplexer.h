#pragma once
#include "Arduino.h"

class Multiplexer{
    private:
        uint8_t m_pin_multiplexer_S0;
        uint8_t m_pin_multiplexer_S1;
        uint8_t m_pin_multiplexer_S2;
        uint8_t m_pin_multiplexer_S3;
        uint8_t m_pin_multiplexer_SIC;

    public:
        Multiplexer(uint8_t pin_multiplexer_S0, uint8_t pin_multiplexer_S1, uint8_t pin_multiplexer_S2, uint8_t pin_multiplexer_S3, uint8_t pin_multiplexer_SIC);
        uint8_t getValue(uint8_t num);

};


