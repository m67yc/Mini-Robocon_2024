#pragma once
#include <Arduino.h>

//You can add arguments and values by yourself if you need

class Joystick {
    private:
        const uint8_t _pin_Joystick_X;
        const uint8_t _pin_Joystick_Y;
        uint16_t _RawX;
        uint16_t _RawY;

        uint8_t _DeadZoneX_insideRight;
        uint8_t _DeadZoneX_insideLeft;
        uint8_t _DeadZoneX_outsideRight;
        uint8_t _DeadZoneX_outsideLeft;

        uint8_t _DeadZoneY_insideTop;
        uint8_t _DeadZoneY_insideBottom;
        uint8_t _DeadZoneY_outsideTop;
        uint8_t _DeadZoneY_outsideBottom;

        uint8_t _MapX;
        uint8_t _MapY;

        /*...*/

    public:
        Joystick(const uint8_t pin_Joystick_X, const uint8_t pin_Joystick_Y);

        uint16_t getRawX();
        uint16_t getRawY();

        void setDeadZoneX(uint8_t DeadZoneX_insideRight, uint8_t DeadZoneX_insideLeft, uint8_t DeadZoneX_outsideRight, uint8_t DeadZoneX_outsideLeft);
        void setDeadZoneY(uint8_t DeadZoneY_insideTop, uint8_t DeadZoneY_insideBottom, uint8_t DeadZoneY_outsideTop, uint8_t DeadZoneY_outsideBottom);

        int16_t getMapX();
        int16_t getMapY();

        void showRawValue();
        void showMapValue();

};
