const int alcoholSensor = A0; // Alcohol sensor connected to analog pin A0
const int redLed = 3; // Red LED connected to digital pin 3
const int greenLed = 4; // Green LED connected to digital pin 4

void setup() {
  pinMode(alcoholSensor, INPUT); // Set alcohol sensor as input
  pinMode(redLed, OUTPUT); // Set red LED as output
  pinMode(greenLed, OUTPUT); // Set green LED as output
}

void loop() {
  int sensorValue = analogRead(alcoholSensor); // Read alcohol sensor value
  if (sensorValue > 500) { // If alcohol sensor value is greater than 500
    digitalWrite(redLed, HIGH); // Turn on red LED
    digitalWrite(greenLed, LOW); // Turn off green LED
  } else { // If alcohol sensor value is less than 500
    digitalWrite(redLed, LOW); // Turn off red LED
    digitalWrite(greenLed, HIGH); // Turn on green LED
  }
  delay(1000); // Wait 1 second
}