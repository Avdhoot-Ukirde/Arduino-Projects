int led = 5;
int a;

void setup()
{
 pinMode(led , OUTPUT);
} 
void loop()
{
 for(a = 0;a <=255 ; a++)
 {
  analogWrite(a , 1);
  delay(80);
 }
  for(a = 255; a > 0; a--)
 {   
  analogWrite(a , 0);
  delay(80);
 }
}
