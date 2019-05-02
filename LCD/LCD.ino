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
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0
  lcd.setCursor(0, 1);
  lcd.setCursor(0, 1);
  // (connecting LCD to the sensor):
  pinMode(trigPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
