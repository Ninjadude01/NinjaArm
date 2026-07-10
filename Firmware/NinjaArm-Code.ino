#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver srvBoard = Adafruit_PWMServoDriver();

const int potCLAW = A0;
const int potBASE = A1;
const int potMAIN = A2;
const int potARM  = A3;

const int chaCLAW = 0;
const int chaBASE = 4;
const int chaMAIN = 8;
const int chaARM  = 12;

#define servoMin 150 
#define servoMax 600 

void setup() {
  Serial.begin(9600);
  srvBoard.begin();
  srvBoard.setOscillatorFrequency(27000000);
  srvBoard.setPWMFreq(50);
  delay(10);
}

void loop() {
  int potClawV = analogRead(potCLAW);
  int potBaseV = analogRead(potBASE);
  int potMainV = analogRead(potMAIN);
  int potArmV  = analogRead(potARM);

  int pulseClaw = map(potClawV, 0, 1023, servoMin, servoMax);
  int pulseBase = map(potBaseV, 0, 1023, servoMin, servoMax);
  int pulseMain = map(potMainV, 0, 1023, servoMin, servoMax);
  int pulseArm  = map(potArmV,  0, 1023, servoMin, servoMax);

  srvBoard.setPWM(chaCLAW, 0, pulseClaw);
  srvBoard.setPWM(chaBASE, 0, pulseBase);
  srvBoard.setPWM(chaMAIN, 0, pulseMain);
  srvBoard.setPWM(chaARM,  0, pulseArm);

  delay(20);
}
