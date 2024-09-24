#include "Joystick_309.h"

// Must Check the function can run successful befor go to next function

Joystick::Joystick(const uint8_t pin_Joystick_X, const uint8_t pin_Joystick_Y)
: _pin_Joystick_X(pin_Joystick_X), _pin_Joystick_Y(pin_Joystick_Y){

    pinMode(_pin_Joystick_X, INPUT);
    pinMode(_pin_Joystick_Y, INPUT);
    _RawX = getRawX();
    _RawY = getRawY();

}

uint16_t Joystick::getRawX(){

    return analogRead(_pin_Joystick_X);
    
}

uint16_t Joystick::getRawY(){
    
    return analogRead(_pin_Joystick_X);
    
}

void Joystick::setDeadZoneX(uint8_t DeadZoneX_insideRight, uint8_t DeadZoneX_insideLeft, uint8_t DeadZoneX_outsideRight, uint8_t DeadZoneX_outsideLeft){

    _DeadZoneX_insideLeft = DeadZoneX_insideLeft;
    _DeadZoneX_insideRight = DeadZoneX_insideRight;
    _DeadZoneX_outsideLeft = DeadZoneX_outsideLeft;
    _DeadZoneX_outsideRight = DeadZoneX_outsideRight;

}

void Joystick::setDeadZoneY(uint8_t DeadZoneY_insideTop, uint8_t DeadZoneY_insideBottom, uint8_t DeadZoneY_outsideTop, uint8_t DeadZoneY_outsideBottom){

    _DeadZoneY_insideTop = DeadZoneY_insideTop;
    _DeadZoneY_insideBottom = DeadZoneY_insideBottom;
    _DeadZoneY_outsideTop = DeadZoneY_outsideTop;
    _DeadZoneY_outsideBottom = DeadZoneY_outsideBottom;

}


int16_t Joystick::getMapX(){

    if(getRawX() < _DeadZoneX_insideLeft && getRawX() > _DeadZoneX_insideRight){
        if(getRawX() > _DeadZoneX_outsideLeft && getRawX() < _DeadZoneX_outsideRight){
            _MapX = map(getRawX(), 0, 1023, 0, 255);
        }
        else{
            _MapX = getRawX() < _DeadZoneX_outsideLeft ? _DeadZoneX_outsideLeft : _DeadZoneX_outsideRight;
        }
    }
    else{
        _MapX = _RawX;
    }

    return _MapX;

}

int16_t Joystick::getMapY(){

    if(getRawY() < _DeadZoneY_insideBottom && getRawY() > _DeadZoneY_insideTop){
        if(getRawY() > _DeadZoneY_insideBottom && getRawY() < _DeadZoneY_outsideTop){
            _MapY = map(getRawY(), 0, 1023, 0, 255);
        }
        else{
            _MapY = getRawY() < _DeadZoneY_outsideBottom ? _DeadZoneY_outsideBottom : _DeadZoneY_outsideTop;
        }
    }
    else{
        _MapY = _RawY;
    }

    return _MapY;

}

void Joystick::showRawValue(){

    Serial.println(getRawX());

}

void Joystick::showMapValue(){

    Serial.println(getRawY());
    
}
