# 1 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino"
# 2 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino" 2
# 3 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino" 2
# 4 "C:\\Users\\owen.lee\\Desktop\\Owen\\01.Project\\Autonomous Vehicle\\05.Software\\Arduino\\Autonomous_Vehicle\\Autonomous_Vehicle.ino" 2

ultrasonic frontUltrasonic(9, 10);
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
