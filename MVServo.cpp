/*
MVServo.h - MVServo library for Arduino - implementation
Copyright (c) 2017 MakerVision, LLC.  All right reserved.
*/

#include "MVServo.h"

MVServo::MVServo(int pin) : pinNumber(pin)
{
    servo.attach(pin);
}

void MVServo::sweepTo(int desiredAngle)
{
    int currentAngle = servo.read();
    while(currentAngle != desiredAngle) {
        if (currentAngle < desiredAngle) {
            currentAngle = currentAngle + 1;
        } else {
            currentAngle = currentAngle - 1;
        }
        servo.write(currentAngle);
        delay(5);
    }
}
