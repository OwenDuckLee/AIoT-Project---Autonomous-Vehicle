#line 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\UltraSonic.h"
#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include<Arduino.h>

class ultrasonic {
    private:
        byte triggerPin;
        byte echoPin;
        unsigned long distanceDetected;
        
        void init();
        unsigned long calculateDistance();
        unsigned long pingDistance();
        void showDistance();
       

    public:
        ultrasonic(byte _triggerPin, byte _echoPin);
        unsigned long runDetectionOfDistance();
};

#endif