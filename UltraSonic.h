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