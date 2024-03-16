/*
  Developed for wobble project by Kevin Rockwell
  https://hackaday.io/project/195175-wobble
  Code based on example from https://www.makerguides.com/drv8825-stepper-motor-driver-arduino-tutorial/
*/

#include "AccelStepper.h"

#define direction_pin 8
#define step_pin 9
//Setup to use driver control for DRV8825
#define motor_interface_type 1

// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motor_interface_type, step_pin, direction_pin);

void setup() {
  //Max speed, steps per second:
  stepper.setMaxSpeed(1000);
}

void loop() {
  //Speed, steps per second:
  stepper.setSpeed(400);
  
  //Perform steps
  stepper.runSpeed();
}