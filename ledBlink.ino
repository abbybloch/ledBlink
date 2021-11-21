//initialize variables
int ledPin = 13;
int ledPin2 = 14;
int buttonPin = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  //setup a button
  pinMode(buttonPin, INPUT);
}

void loop() {
  //if button is pressed, blink the led 1
  //if button is not pressed, blink led 2
  if (digitalRead(buttonPin) == HIGH){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } 
  else{
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin2, LOW);
    delay(500);
  }
}
