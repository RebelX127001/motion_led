int led = 13;
int sensor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorval = digitalRead(sensor);
  if (sensorval == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else {
    Serial.println("No Motion!");
    digitalWrite(led, LOW);
    //pause the program 
    delay(1000);
  }
}
