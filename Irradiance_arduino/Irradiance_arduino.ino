// Analog 1 UVA
// Calibration
float A1Intercept = 0;
float A1Slope = 3940;
// Values
float A1Value = 0;
float A1oldSensorReading = 0;
float A1Voltage;
float A1SensorReading;

// Analog 2 Pyranometer
// Calibration
float A2Intercept = 0;
float A2Slope = 250;
// Values
float A2Value = 0;
float A2oldSensorReading = 0;
float A2Voltage;
float A2SensorReading;

// Digital 1 Radiation Monitor
int D1pin = 2;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Ready");
}

void loop() {
  // Digital 1
  int countSum = 0;

  if (digitalRead(D1pin)==HIGH) {
        countSum++;
    }
  if (countSum != 0 ) {
       Serial.println(countSum);
    }
  
  // Analog 1
  A1oldSensorReading = A1SensorReading;
  A1Value = analogRead(A0);
  A1Voltage = A1Value / 1023 * 5.0; // convert to raw voltage
  A1SensorReading = A1Intercept + A1Voltage * A1Slope; // convert voltage to sensor reading
  // print on serial port when Value Changes
  if (A1SensorReading != A1oldSensorReading) {
    //Serial.print("Analog 1: ");
    //Serial.println(A1Value);
  }

  // Analog 2
  A2oldSensorReading = A2SensorReading;
  A2Value = analogRead(A3);
  A2Voltage = A2Value / 1023 * 5.0; // convert to raw voltage
  A2SensorReading = A2Intercept + A2Voltage * A2Slope; // convert voltage to sensor reading
  // print on serial port when Value Changes
  if (A2SensorReading != A2oldSensorReading) {
    //Serial.print("Analog 2: ");
    //Serial.println(A2Value);
  }

  
  
}
