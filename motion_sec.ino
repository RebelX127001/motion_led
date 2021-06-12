int ledLight = 7;
int relaySwitch = 8;
int PIR = 11;
int button = 13;
int value = LOW;

void setup() {
  pinMode(ledLight, OUTPUT);
  //declare pin 8
  pinMode (relaySwitch, OUTPUT);
  //declare pin 11 as Output
  pinMode(PIR, INPUT);
  Serial.begin(9600);
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
