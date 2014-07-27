// Swerve Dog; rgbLED
// This sketch demonstrates the use of PWM using
// analogWrite to set the colors of an RGB LED.
 
// Declaring constants to prevent modification of
// LED PIN assignments.
const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
 
void setup(){
 
}
 
void loop(){
   // iD Green
  analogWrite(redPin, 210);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 5);
}
