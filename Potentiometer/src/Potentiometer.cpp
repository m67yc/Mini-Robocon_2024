#include "Potentiometer.h"

Potentiometer::Potentiometer(uint8_t pin_potentiometer)
: m_pin_potentiometer(pin_potentiometer){

    pinMode(m_pin_potentiometer, INPUT);

}

uint16_t Potentiometer::getValue(){

    return analogRead(m_pin_potentiometer);

}

uint8_t Potentiometer::getMoterMap(){

    return map(getValue(), 0, 1024, 0, 255);

}

uint8_t Potentiometer::getSwitchMap(){

    return map(getValue(), 0 ,1024, 0 ,3);

}