
// just using arduino to get the input for the DTH11 sensor 

#include <Arduino.h> // ADD THIS LINE

#define echoPin 5 // Corresponds to D1
#define trigpin 4 // Corresponds to D2

long duration;
int distance;

void setup() {
  Serial.begin(115200);
  pinMode(trigpin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigpin
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to the trigpin
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  // Read the echoPin to get the sound wave's travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distance = (duration * 0.034 / 2);
   
  // Print the result to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}