int motor1b = 9;
int motor2a = 10;
int motor2b = 11;

int sw1 = 6;
int sw2 = 7;

void setup()
{
 pinMode(motor1a , OUTPUT);
 pinMode(motor1b , OUTPUT);
 pinMode(motor2a , OUTPUT);
 pinMode(motor2b , OUTPUT);
 
 pinMode(sw1 , INPUT);
 pinMode(sw2 , INPUT);
 Serial.begin(9600);
}  
void loop()
{
 int a = digitalRead(sw1);
 int b = digitalRead(sw2);
  
 if (a == 1)
 {
  digitalWrite(motor1a , 0);
  digitalWrite(motor1b , 1);
  digitalWrite(motor2a , 0);
  digitalWrite(motor2b , 0);
 }
 else if (b == 1)
 {
  digitalWrite(motor1a , 0);
  digitalWrite(motor1b , 0);
  digitalWrite(motor2a , 0);
  digitalWrite(motor2b , 1);
 }
 else 
 {
  digitalWrite(motor1a , 0);
  digitalWrite(motor1b , 0);
  digitalWrite(motor2a , 0);
  digitalWrite(motor2b , 0);
 }
  
}