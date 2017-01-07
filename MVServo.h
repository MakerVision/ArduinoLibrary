#ifndef MVServo_h
#define MVServo_h

#include <Arduino.h>
#include <Servo.h>

class MVServo
{
  public:
    MVServo(int pinNumber);
    void sweepTo(int desiredAngle);

  private:
    Servo servo;
};

#endif
