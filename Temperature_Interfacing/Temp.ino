void setup()
{
 pinMode(A0,INPUT);
 pinMode(7, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
 float tem_read = analogRead(A0);
 
 float temp = tem_read*(5.0/1024)*100;
  
/* Serial.print("Digital thermometer ");
 Serial.print(temp);
 Serial.println(" *C");
 delay(500);
*/
 if (temp>80) 
 {
  digitalWrite(7,1);
  Serial.print(temp);
  Serial.println("   Light is ON");
 }
 else
 {
  digitalWrite(7,0);
  Serial.print(temp);
  Serial.println("   Light is OFF");
  
 }
}