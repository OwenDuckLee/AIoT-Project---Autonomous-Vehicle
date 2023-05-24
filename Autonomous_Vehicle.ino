#include "config.h"

class ultrasonic {
    private:
        byte triggerPin;
        byte echoPin;
        unsigned long distanceDetected;

        unsigned long calculateDistance(){
            return distanceDetected = pingDistance() / 58;
        }

        unsigned long pingDistance(){
            digitalWrite(triggerPin , HIGH);
            delay(10);
            digitalWrite(triggerPin , LOW);
            return pulseIn(echoPin, HIGH, 23200);
        }

        void showDistance(){
            Serial.print("The detected distance is: ");
            Serial.print(distanceDetected);
            Serial.println(" cm.");
        }
        
        void init(){
            pinMode(triggerPin, OUTPUT);
            pinMode(echoPin, INPUT);
        }

    public:
        ultrasonic(byte _triggerPin, byte _echoPin){
            triggerPin = _triggerPin;
            echoPin = _echoPin;
            init();
        }

        void runDetectionOfDistance(){
            calculateDistance();
            showDistance();
            delay(2000);
        }
};

ultrasonic frontUltrasonic(ULTRASONIC_TRIGGER_PIN, ULTRASONIC_ECHO_PIN);

void setup()
{   
    Serial.begin(9600);
}

void loop()
{
    frontUltrasonic.runDetectionOfDistance();
}
