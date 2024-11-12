/*
Code Used For Initialising An Ultrasonic Sensor

*/
const int trigPin = 10;  //identify variables
const int echoPin = 13;
float duration, distance;
 
void setup() {
  Serial.begin (9600);         //set up arduino pins
  pinMode(trigPin, OUTPUT);    //ultrasonic sensor has an input and an outpu
  pinMode(echoPin, INPUT);
}
 
void loop() {
   
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the response from the HC-SR04 Echo Pin
 
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration / 2) * 0.0343;
  
  // Send results to Serial Monitor
  Serial.print("Distance = ");
  if (distance >= 400 || distance <= 2) {
     Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
  }
  delay(500);
}
