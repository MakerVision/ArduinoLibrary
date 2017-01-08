#include <MVServo.h>

// Servo Sweep
// by MakerVision, LLC <http://makervision.io>

// Demostrates how to sweep a servo motor.

MVServo* servo;

void setup() {
  Serial.begin(9600);
  servo = new MVServo(9);
}

void loop() {
  // Sweep the servo to 180deg, then back down to 0, and repeat indefinitely.
  servo->sweepTo(180);
  servo->sweepTo(0);
}
