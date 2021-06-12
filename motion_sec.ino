int ledLight = 7;
int relaySwitch = 8;
int PIR = 11;
int button = 13;
int value = LOW;

void setup() {
  //declare pin 7 as Output
  pinMode(ledLight, OUTPUT);
  pinMode (relaySwitch, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600); //set the board rate for displaying text on the serial monitor
}

void loop(){
  value = digitalRead(PIR);
  if (value == HIGH) {
    digitalWrite(ledLight, HIGH);
    digitalWrite (relaySwitch, HIGH);
    Serial.println ("Movement Detected!!!");
    delay(15000);
  } 
  else {
      digitalWrite (ledLight, LOW);
      digitalWrite (relaySwitch, LOW);
      Serial.println("No Movement!!!");
      delay(200);
  }
}
