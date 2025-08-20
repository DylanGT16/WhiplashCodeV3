#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor LowerChannel(10);
inline pros::Motor UpperChannel(7);
inline ez::Piston MiddleGoalScore('A');
inline ez::Piston LoaderIntake('B');