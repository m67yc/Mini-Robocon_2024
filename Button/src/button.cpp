#include "button.h"

Button::Button(const uint8_t pin_button)
: m_pin_button(pin_button){

    pinMode(m_pin_button, INPUT);

}

bool Button::readValue(){

    return digitalRead(m_pin_button);

}

uint16_t setSpeedValue(uint16_t speed, uint8_t mode){

    m_speed = speed;
    m_mode = mode;
    if(mode == 2){
        m_speed += 50;
    }
    else if(mode == 0){
        m_speed -= 50;
    }

    return m_speed;

}

uint8_t setDirectionValue(uint8_t direction, uint8_t mode){

    m_direction = direction;
    m_mode = mode;
    if(mode == 2){
        m_direction += 1;
    }
    else if(mode == 0){
        m_direction -= 1;
    }

    return m_direction;

}