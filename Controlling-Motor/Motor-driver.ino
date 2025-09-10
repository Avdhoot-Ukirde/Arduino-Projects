int motor1a = 2;
int motor1b = 3;
int motor2a = 4;
int motor2b = 5;

void setup()
{
 pinMode(motor1a , INPUT);
 pinMode(motor1b , INPUT);
 pinMode(motor2a , INPUT);
 pinMode(motor2b , INPUT);
 Serial.begin(9600);
}

void loop()
{
 digitalWrite(motor1a, HIGH);
 digitalWrite(motor1b, LOW);
 digitalWrite(motor2a, 1);
 digitalWrite(motor2b, 0);
 delay(1000);
 Serial.println("Motor is running in clockwise direction");
  
 digitalWrite(motor1a, 0);
 digitalWrite(motor1b, 1);
 digitalWrite(motor2a, 0);
 digitalWrite(motor2b, 1);
 delay(1000);
 Serial.println("Motor is running in anti-clockwise direction");
 
 //digitalWrite(motor2a, 1);
 //digitalWrite(motor2b, 0);
 //delay(1000);
 //Serial.println("Motor is running in clockwise direction");
 
// digitalWrite(motor2a, 0);
 //digitalWrite(motor2b, 1);
 //delay(1000);
 //Serial.println("Motor is running in anti-clockwise direction"); 
 
}