//initialize variables
int ledPin = 13;
int buttonPin = 14;

void setup() {
  pinMode(ledPin, OUTPUT);
  //setup a button
  pinMode(buttonPin, INPUT);
}

void loop() {
  //if button is pressed, blink the led
  if (digitalRead(buttonPin) == HIGH){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } 
}
