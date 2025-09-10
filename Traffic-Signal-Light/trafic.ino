// C++ code
//
int LED3 = 4;
int LED2 = 12;
int LED1 = 8;
void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  Serial.println("the Green led is on"); 
  delay(2000);
  
  digitalWrite(LED1,0);
  digitalWrite(LED2,1);
  digitalWrite(LED3,LOW);
  Serial.println("the Green led is on"); 
  delay(1000);
  
  digitalWrite(LED1,0);
  digitalWrite(LED2,0);
  digitalWrite(LED3,1);
  Serial.println("the Green led is on"); 
  delay(2000);
  
}