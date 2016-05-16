#include <Arduino.h>
#include <Servo.h>
#include <Wire.h>

Servo myServo;
Servo myMotor;

String inputString = "";
String outputString = "";
String speedStr, steeringStr;

int ch1, ch2;
int counter;
double speedVal;
double steeringVal;
int firstDelim;
int lastDelim;
int middleDelim;

bool flag = false;

void stopAll();
void trigSpeed(int event);
void trigSteering();
void trigBrake();

void setup() {
  Serial.begin(9600);
  Wire.begin();
  // attaches the servo on pin 11. Max & Min boundaries
  myServo.attach(11, 700, 1700);
  // Sets the steering to neutral (Straight)
  myServo.writeMicroseconds(1105);
  // Attach the motor to pin 10. Max & Min boundaries
  myMotor.attach(10, 1000, 2000);
  // Sets the motor to neutral (Standstill)
  myMotor.writeMicroseconds(1500);

  pinMode(3, INPUT);
  pinMode(5, INPUT);

  firstDelim = inputString.indexOf("{");
  middleDelim = inputString.indexOf(",");
  lastDelim = inputString.indexOf("}");

  attachInterrupt(digitalPinToInterrupt(3), stopAll, RISING);
}

void loop() {

  if (flag) {
    // ch1 = servo, ch2 = motor, ch3 & ch4 = encoder
    ch1 = pulseIn(3, HIGH);
    ch2 = pulseIn(5, HIGH);

    myServo.writeMicroseconds(1105);
    //myMotor.writeMicroseconds(1500);

    // Ensure that the receiver is turned off by checking that the value of
    // ch1 == 0 for 5 runs of the loop.
    if (ch1 == 0) {
      counter++;
    }
    else {
      counter = 0;
    }

    if (counter > 5) {
      flag = 0;
    }
  }

  if (inputString.startsWith("{") && inputString.endsWith("}")) {
    speedStr = inputString.substring(firstDelim + 1, middleDelim);
    steeringStr = inputString.substring(middleDelim + 1, lastDelim);
    Serial.println(inputString);
    inputString = "";
  }

  Wire.requestFrom(8, 2);
  int arry[2];

  if (Wire.available()) {
    for (int i=0; i<2; i++) {
      arry[2] = Wire.read();
    }
  }

  trigSteering();
  trigSpeed(arry[0]);
  trigBrake();

  outputString = "string";
}

/**
 * Triggered on interrupt when a signal is received.
 * @method stopAll
 */
void stopAll() {
  flag = true;
}

/**
 * Determines the steering of the servo,
 * in 3 different stages.
 * @method trigSteering
 */
void trigSteering() {
  // Turn right.
  if (steeringVal == 1 || ch1 > 1580) {
    myServo.writeMicroseconds(700);
  }
  // Turn left.
  else if (steeringVal == -1 || (ch1 < 1430 && ch1 > 500)) {
    myServo.writeMicroseconds(1510);
  }
  // Neutral.
  else if(steeringVal == 5) {
    myServo.writeMicroseconds(1505);
  }
}

/**
 * Determines the speed of the motor,
 * in 3 different states by the velocity
 * and the received request.
 * @method trigSpeed
 * @param  velocity     [contains the value of arry[0]]
 */
void trigSpeed(int velocity) {

  // Regelated forward speed.
  if (speedVal == 1 || ch2 > 1570) {
    if ( velocity > 5) {
      myMotor.writeMicroseconds(1555);
    }
    else if (velocity < 4) {
      myMotor.writeMicroseconds(1575);
    }
  }

  // Neutral speed.
  if (speedVal == 4) {
    myMotor.writeMicroseconds(1500);
  }
  // Backward speed.
  if (speedVal == -1 || (ch2 < 1400 && ch2 > 500)) {
    myMotor.writeMicroseconds(1200);
  }
}

/**
 * A braking method to prevent the car
 * from rolling before stop.
 * @method trigBrake
 */
void trigBrake() {
  // Forward braking
  if (speedVal == 2) {
    myMotor.writeMicroseconds(1200);
    myMotor.writeMicroseconds(1500);
  }
  // Backward Braking
  else if (speedVal == 3) {
    myMotor.writeMicroseconds(1555);
    myMotor.writeMicroseconds(1500);
  }
}

/**
 * Triggered after every loop if a serial is received.
 * Stores the serial into a tmp string (inputString).
 * @method serialEvent
 */
void serialEvent() {
  int countNo = 0;

  if (Serial.available()) {
    countNo++;
    Serial.print("NO._OF_TIMES_WHILE_LOOPS:\t");
    Serial.println(countNo);
    char inChar = (char) Serial.read();
    inputString += inChar;
  }
}
