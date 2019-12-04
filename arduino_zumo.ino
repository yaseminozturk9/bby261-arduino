#include <ZumoShield.h>

#define LED_PIN 13
Pushbutton button(ZUMO_BUTTON);

ZumoMotors motors;
void setup() {
  pinMode(LED_PIN, OUTPUT);


}

void loop()
{
  button.waitForButton();

  // blink LED
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);


  digitalWrite(LED_PIN, HIGH);

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


  digitalWrite(LED_PIN, HIGH);

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

  digitalWrite(LED_PIN, LOW);

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

  digitalWrite(LED_PIN, LOW);

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

  delay(1500);
}
