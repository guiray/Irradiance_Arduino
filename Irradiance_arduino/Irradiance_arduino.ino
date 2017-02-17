// Analog 1 UVA
int A1SensorReading;
// Analog 2 Pyranometer (will change to light sensor)
int A2SensorReading;
// Digital 1 Radiation Monitor
int D1pin = 2;

unsigned long time;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
  //Serial.println("Serial Ready");
}

void loop() {
  time = millis();

  if (time % 100 == 0) {
    A1SensorReading = analogRead(A0);
    Serial.print("A1_");
    Serial.println(A1SensorReading);

    A2SensorReading = analogRead(A2);
    Serial.print("A2_");
    Serial.println(A2SensorReading);

    delay(10);
  }

  // Digital 1
  if (digitalRead(D1pin) == 1) {
    Serial.print("D1_");
    Serial.println("1");
    delay(1);
  }

}
