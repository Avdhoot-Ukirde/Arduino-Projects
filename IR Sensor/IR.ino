nt ir_sensor = 7;
int led =  8;
void setup()
{
 pinMode(ir_sensor , INPUT);
 pinMode(led , OUTPUT);
 Serial.begin(9600);           
}

void loop() 
{
 int value = digitalRead(ir_sensor);
 Serial.println(value);

 if(value == 1)
  {
    digitalWrite(led,1);
  }  
 else
 {
   digitalWrite(led ,0);
 }
}
