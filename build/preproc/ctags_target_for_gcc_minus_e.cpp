# 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
# 2 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino" 2

class ultrasonic {
    private:
        byte triggerPin;
        byte echoPin;
        unsigned long distanceDetected;

        unsigned long calculateDistance(){
            return distanceDetected = pingDistance() / 58;
        }

        unsigned long pingDistance(){
            digitalWrite(triggerPin , 0x1);
            delay(10);
            digitalWrite(triggerPin , 0x0);
            return pulseIn(echoPin, 0x1, 23200);
        }

        void showDistance(){
            Serial.print("The detected distance is: ");
            Serial.print(distanceDetected);
            Serial.println(" cm.");
        }

        void init(){
            pinMode(triggerPin, 0x1);
            pinMode(echoPin, 0x0);
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

ultrasonic frontUltrasonic(9, 10);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    frontUltrasonic.runDetectionOfDistance();
}
