#line 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Motor.h"
#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>

typedef enum {
    FORWARD = 10,
    BACKWARD,
    LEFT,
    RIGHT,
    STOP
}Modes;

class Motor{
   private:
        byte ENA, ENB, IN1, IN2, IN3, IN4;

   public:
        Modes mode = STOP;
        Motor(byte ENA, byte ENB, byte IN1, byte IN2, byte IN3, byte IN4);
        void drive(Modes mode, int pwmA, int pwmB);
};

#endif