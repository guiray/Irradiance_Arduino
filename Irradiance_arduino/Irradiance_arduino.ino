// Analog 1 UVA
float A1Value = 0;
float A1oldSensorReading = 0;
float A1SensorReading;

// Analog 2 Pyranometer (will change to light sensor)
float A2Value = 0;
float A2oldSensorReading = 0;
float A2SensorReading;

// Digital 1 Radiation Monitor
int D1pin = 2;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
  Serial.println("Serial Ready");
}

void loop() {
   
  // Analog 1
  //A1oldSensorReading = A1SensorReading;
  A1SensorReading = analogRead(A0);
  //if (A1SensorReading != A1oldSensorReading) {
    //Serial.print("0");
    //Serial.println(A1SensorReading);
  //}

  // Analog 2
  //A2oldSensorReading = A2SensorReading;
  //A2SensorReading = analogRead(A2);
  //if (A2SensorReading != A2oldSensorReading) {
    //Serial.print("2");
    //Serial.println(A2SensorReading);
  //}

  // Digital 1
  if (digitalRead(D1pin) == 1) {
    Serial.println("1");
    delay(1);
  }

}
