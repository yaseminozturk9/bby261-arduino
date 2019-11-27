
#include <Wire.h>
#include <ZumoShield.h>

Pushbutton button(ZUMO_BUTTON);

ZumoMotors motors;

void setup()
{
  
  }


void loop()
{
  // run left motor forward


  for (int speed = 0; speed <= 1000; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  for (int speed = 1000; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  // run left motor backward


  for (int speed = 0; speed >= -1000; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  for (int speed = -1000; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  // run right motor forward



  for (int speed = 0; speed <= 1000; speed++)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }

  for (int speed = 1000; speed >= 0; speed--)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }

  // run right motor backward



  for (int speed = 0; speed >= -1000; speed--)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }

  for (int speed = -1000; speed <= 0; speed++)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }

  delay(1100);
}
