int led = 6;
int pot_meter = A0;
int pot;

void setup()
{
 pinMode(led , OUTPUT);
 pinMode(pot_meter , INPUT);
 Serial.begin(9600); 
}

void loop()
{
 pot = map(analogRead(pot_meter),0,1023,0,255);
 analogWrite(led , pot);
 Serial.println(pot);
}