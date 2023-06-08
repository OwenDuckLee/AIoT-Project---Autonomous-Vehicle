#line 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\UltraSonic.cpp"
#include "UltraSonic.h"

ultrasonic :: ultrasonic(byte _triggerPin, byte _echoPin){
    triggerPin = _triggerPin;
    echoPin = _echoPin;
    init();
}

void ultrasonic :: init(){
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

unsigned long ultrasonic :: runDetectionOfDistance(){
    calculateDistance();
    showDistance();
    delay(2000);
    return distanceDetected;
}

unsigned long ultrasonic :: calculateDistance(){
    return distanceDetected = pingDistance() / 58;
}

unsigned long ultrasonic :: pingDistance(){
    digitalWrite(triggerPin , HIGH);
    delay(10);
    digitalWrite(triggerPin , LOW);
    return pulseIn(echoPin, HIGH, 23200);
}

void ultrasonic :: showDistance(){
    Serial.print("The detected distance is: ");
    Serial.print(distanceDetected);
    Serial.println(" cm.");
}



