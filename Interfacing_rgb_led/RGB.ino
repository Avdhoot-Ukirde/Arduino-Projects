const int buttonPin = 7; // choose the pin for the pushbutton
const int ledPin = 11; // choose the pin for a LED
int buttonState = 0; // variable for reading the pushbutton pin status
void setup()
{
pinMode(ledPin, OUTPUT); // declare LED as output
pinMode(buttonPin, INPUT); // declare pushbutton as input
}
void loop()
{
buttonState = digitalRead(button Pin); // read input value
if (buttonState == HIGH)
{  // check if the input is HIGH (button pressed)
digitalWrite(ledPin, HIGH); // turn LED ON

}
else
{
digitalWrite(ledPin, LOW); // turn LED OFF
}
}