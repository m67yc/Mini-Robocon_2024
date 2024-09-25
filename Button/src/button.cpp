#include "button.h"

Button::Button(const uint8_t pin_button)
: m_pin_button(pin_button){

    pinMode(m_pin_button, INPUT);

}

bool Button::readValue(){

    return digitalRead(m_pin_button);

}