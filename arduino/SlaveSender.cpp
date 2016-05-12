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
}

void loop() {
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

void requestEvent() {
  Wire.write(velocity);
}

void tick() {
  tickCount++;
}
