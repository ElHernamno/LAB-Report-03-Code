/*
A Blink Program with PushButton Integration
Digital input and output
*/
const int ledPin = 2 ; // the number of the LED pin
const int PBPin = 3;  // the number of the PB pin
int ledState = LOW;  // ledState used to set the LED
unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 5000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(PBPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.
  int buttonState = digitalRead(PBPin);
  Serial.print("Button State = ");
  Serial.println(buttonState);



  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time the LED blinked
    previousMillis = currentMillis;

    // if the LED is off turn on
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
