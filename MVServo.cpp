/*
MVServo.h - MVServo library for Arduino - implementation
Copyright (c) 2017 MakerVision, LLC.  All right reserved.
*/

#include "MVServo.h"

MVServo::MVServo(int pinNumber)
{
    Serial.print("Attaching to: ");
    Serial.println(pinNumber);
    servo.attach(pinNumber);
}

void MVServo::sweepTo(int desiredAngle)
{
    int currentAngle = servo.read();
    // Serial.print("====== current angle");
    // Serial.println(currentAngle);
    while(currentAngle != desiredAngle) {
        if (currentAngle < desiredAngle) {
            currentAngle = currentAngle + 1;
        } else {
            currentAngle = currentAngle - 1;
        }
        // Serial.print("========= writing: ");
        // Serial.println(currentAngle);
        servo.write(currentAngle);
        delay(10);
    }
    Serial.println("Made it to the desired angle");
}
