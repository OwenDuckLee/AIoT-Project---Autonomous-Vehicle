#include "config.h"
#include "UltraSonic.h"
#include "Motor.h"

ultrasonic frontUltrasonic(ULTRASONIC_TRIGGER_PIN, ULTRASONIC_ECHO_PIN);
// Motor carMotor(ENA, ENB, 1, 2, 3, 4);

const unsigned int pwm = 200;
const unsigned int limitDistance = 10;
unsigned long distance = 0;

void setup()
{   
    Serial.begin(9600);
}

void loop()
{
   distance = frontUltrasonic.runDetectionOfDistance();

   if(distance > limitDistance){
        //motor forward
        //carMotor.drive();
   }
   else{
        //motor backward
        //carMotor.drive();
   }
}
