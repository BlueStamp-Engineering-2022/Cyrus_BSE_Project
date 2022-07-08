//code for bottom sensor
const int TRIG_PIN = 6; // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO_PIN = 7; // Arduino pin connected to Ultrasonic Sensor's ECHO pin
const int LED_PIN  = 3; // Arduino pin connected to LED's pin
const int DISTANCE_THRESHOLD = 50; // centimeters
int score = 0;
int other_sensor = 0;
int this _ sensor = 0;

// variables will change:
float duration_us, distance_cm;

void motion_track_score(const char *event, const char *data){
    other_sensor=millis();}

void setup() {
  Serial.begin (9600);       // initialize serial port
  pinMode(TRIG_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO_PIN, INPUT);  // set arduino pin to input mode
  pinMode(LED_PIN, OUTPUT);  // set arduino pin to output mode
  Particle.subscribe("Motion_PIR_Top", motion_track_score);
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
    this_sensor = millis();
      if (abs(other_sensor-this_sensor)<=2000){
        score = score+1;
         Particle.publish("Basket_Made", String(score));
         }
            pirState = HIGH;
  }
  else{
    digitalWrite(LED_PIN, LOW);  // turn off LED
  }
  

  delay(5);
}