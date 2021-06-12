int led = 13;
int sensor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  //the transfer capa
  Serial.begin(9600);
}

void loop() {
  //declare variable sensorval and assign the sensor value to it
  int sensorval = digitalRead(sensor);

  //if sensor value is high
  if (sensorval == HIGH) {
    //display motion detected and turn on led
    Serial.println("Motion Detected!");
    digitalWrite(led, HIGH);
    //pause the program for 1 second
    delay(1000);
  }
  //else if sensor value is low
  else {
    //display motion stopped and turn the led off
    Serial.println("No Motion!");
    digitalWrite(led, LOW);
    //pause the program for 1 second
    delay(1000);
  }
}
