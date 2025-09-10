int LED = 6;
int SW = 8;


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int result = digitalRead(SW);
  
  if(result == 1)
     {
       digitalWrite(LED, 1);
       Serial.println("The Led is on");
     }
   else
   {
      digitalWrite(LED,0);
      Serial.println("The LEd is off");
   }
} 