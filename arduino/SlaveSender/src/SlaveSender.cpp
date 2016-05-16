#include <Arduino.h>
#include <Wire.h>

unsigned long currentMillis = 0;
unsigned long previousMillis = 0;
volatile int tickCount = 0;
int rpm = 0;
int velocity = 0;

void requestEvent();
void tick();

void setup() {
  Wire.begin(8);
  Wire.onRequest(requestEvent);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(7), tick, FALLING);

  while (true) {
    Serial.println("SETUP_RUNNING");
  }
}

/**
 * Loop calculates the ticks received by encoder
 * to rpm and velocity within 1sec (1000ms).
 * @method loop
 */
void loop() {
  Serial.println("LOOP_RUNNING");
  currentMillis = millis();

  if (currentMillis - previousMillis >= 1000) {
    detachInterrupt(digitalPinToInterrupt(7));

    rpm = (tickCount/4) * 60;
    velocity = rpm * (0.32*3.14)/60;

    tickCount = 0;
    previousMillis = currentMillis;
    attachInterrupt(digitalPinToInterrupt(7), tick, FALLING);
  }
}

/**
 * Triggered when MasterReceiver requests package.
 * @method requestEvent
 */
void requestEvent() {
  Wire.write(velocity);
}

/**
 * Triggered on interrupt when a signal is received.
 * @method tick
 */
void tick() {
  tickCount++;
}
