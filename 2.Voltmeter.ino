
int pot = A0; //potentiemeter pin 
int value = 0; //potentiemeter Value 

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(pot); 
  int voltage = map(value,0,1023,0,500); 
  float volt = voltage/100.0; 
  Serial.println(volt);

}
