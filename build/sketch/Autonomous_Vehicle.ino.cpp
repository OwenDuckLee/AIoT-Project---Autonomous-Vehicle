#include <Arduino.h>
#line 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
#include "config.h"
#include "UltraSonic.h"
#include "Motor.h"

ultrasonic frontUltrasonic(ULTRASONIC_TRIGGER_PIN, ULTRASONIC_ECHO_PIN);
// Motor carMotor(ENA, ENB, 1, 2, 3, 4);

const unsigned int pwm = 200;
const unsigned int limitDistance = 10;
unsigned long distance = 0;

#line 12 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
void setup();
#line 17 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
void loop();
#line 12 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
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

