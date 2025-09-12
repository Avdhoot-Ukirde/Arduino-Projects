/*
. Photoresistors work based off of the principle of photoconductivity.
  Photoconductivity is an optical phenomenon in which the material's
  conductivity is increased when light is absorbed by the material.

. When light falls i.e. when the photons fall on the device, the electrons
  in the valence band of the semiconductor material are excited to the
  conduction band. These photons in the incident light should have
  energy greater than the bandgap of the semiconductor material to
  make the electrons jump from the valence band to the conduction
  band.

. Hence when light having enough energy strikes on the device, more
  and more electrons are excited to the conduction band which results
  in a large number of charge carriers. The result of this process is
  more and more current starts flowing through the device when the
  circuit is closed and hence it is said that the resistance of the device
  has been decreased. This is the most common working principle of LDR.
*/

// LDR Voltage Converter

void setup ()
{
 Serial.begin(9600);
}
void loop()
{
 int sensor = analogRead (A0);
 float voltage = sensor *(5.0/1024);
 Serial.println(voltage);

}

// Street Light Code
void setup()
{
pinMode (8, OUTPUT);
pinMode (A1, INPUT);
Serial.begin(9600);
}

void loop()
{
 int value = analogRead(A1);
 if(value>20)
{
 digitalWrite(8,1);
 Serial.println ("Street light on");
}
 else
 {
 digitalWrite(8,0);
 Serial.println("street light off");
 }
}