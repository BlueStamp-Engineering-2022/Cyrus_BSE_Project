//code for top sensor
const int TRIG_PIN = 6; 
const int ECHO_PIN = 7; 
const int LED_PIN  = 3; 
const int DISTANCE_THRESHOLD = 50; // centimeters

// variables will change:
float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);      
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);
  // calculate the distance
  distance_cm = 0.017 * duration_us;

  if(distance_cm < DISTANCE_THRESHOLD){
    digitalWrite(LED_PIN, HIGH); // turn on LED
    Particle.publish("Motion_PIR_Top","Motion_detected");}
  else
    digitalWrite(LED_PIN, LOW);  // turn off LED


  delay(500);
}