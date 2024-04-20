const int flameSensorPin = A0; // Analog pin connected to flame sensor
const int ledPin = 9;          // Digital pin connected to LED

void setup() {
  pinMode(flameSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(flameSensorPin);
  Serial.println(sensorValue); // Print sensor value to serial monitor

  if (sensorValue > 300) {     // Adjust threshold based on sensor sensitivity
    digitalWrite(ledPin, HIGH); // Turn on LED if flame is detected
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED if no flame is detected
  }

  delay(100); // Delay for stability
}
