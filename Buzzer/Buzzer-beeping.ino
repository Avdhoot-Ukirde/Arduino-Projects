int buz =  7;
int SW = 4;
void setup()
{
 pinMode(buz , OUTPUT);
 pinMode(SW , INPUT);
}

void loop()
{
  if(digitalRead(SW) == 1)
  {
   digitalWrite(buz,HIGH);
  }
  else
  {
   digitalWrite(buz , 0);
  } 
}