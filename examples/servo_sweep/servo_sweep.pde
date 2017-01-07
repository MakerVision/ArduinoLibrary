#include <MVServo.h>

// Servo Sweep
// by MakerVision, LLC <http://makervision.io>

// Demostrates how to sweep a servo motor.

// Declare an instance of your servo, specifying the control pin number.
MVServo servo(9);

void setup() {
}

void loop() {
  // Sweep the servo to 180deg, then back down to 0, and repeat indefinitely.
  servo.sweepTo(180);
  servo.sweepTo(0);
}
