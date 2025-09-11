int buzz = 3;
int pir = 10;

void setup()
{
 pinMode(buzz , OUTPUT);
 pinMode(pir , INPUT);
 Serial.begin(9600);
}

void loop()
{
 int value = digitalRead(pir);
 
  
 if(value == 1)
 {
  digitalWrite(buzz , 1);
  Serial.println("Motion is Detected");
 }
 else 
 {
  digitalWrite(buzz , 0);
  Serial.println("Motion is Not Detected");   
 }
}  