#include "multiplexer.h"

Multiplexer::Multiplexer(uint8_t pin_multiplexer_S0, uint8_t pin_multiplexer_S1, uint8_t pin_multiplexer_S2, uint8_t pin_multiplexer_S3, uint8_t pin_multiplexer_SIC)
:m_pin_multiplexer_S0(pin_multiplexer_S0), m_pin_multiplexer_S1(pin_multiplexer_S1), m_pin_multiplexer_S2(pin_multiplexer_S2), m_pin_multiplexer_S3(pin_multiplexer_S3), m_pin_multiplexer_SIC(pin_multiplexer_SIC) {

    pinMode(m_pin_multiplexer_S0, INPUT);
    pinMode(m_pin_multiplexer_S1, INPUT);
    pinMode(m_pin_multiplexer_S2, INPUT);
    pinMode(m_pin_multiplexer_S3, INPUT);
    pinMode(m_pin_multiplexer_SIC, INPUT);

}

uint8_t Multiplexer::getValue(uint8_t num){

    if(num == 0){
        return digitalRead(m_pin_multiplexer_S0);
    }
    else if(num == 1){
        return digitalRead(m_pin_multiplexer_S1);
    }
    else if(num == 2){
        return digitalRead(m_pin_multiplexer_S2);
    }
    else if(num == 3){
        return digitalRead(m_pin_multiplexer_S3);
    }
    else{
        return digitalRead(m_pin_multiplexer_SIC);
    }
    
}