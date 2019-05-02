/*
 Syann Kristian- Distance reader
 This project connects an LCD to an Ultrasonic Distance Sensor
 so the distance recorded from the Distance Sensor and turn the
 potentiometer all the way up, the distance shows up on the LCD
 */

//initialize the library with the numbers of the interface point
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int trigpin = 9;
const int schoPin = 10;
long duration;
int distanceCm, distanceInch;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
