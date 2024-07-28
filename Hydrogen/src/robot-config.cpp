#include "vex.h"

using namespace vex;

brain Brain;
controller Controller = controller(primary);

motor LF = motor(PORT9 , ratio18_1 , false);

inertial Inertial = inertial(PORT10);

void initialize_robot(){
    Inertial.calibrate();
    waitUntil(!Inertial.isCalibrating());
    LF.resetPosition();
}