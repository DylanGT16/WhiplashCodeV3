#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor LowerChannel(20);
inline pros::Motor UpperChannel(12);
inline ez::Piston MiddleGoalScore('A');
inline ez::Piston LoaderIntake('B');
inline ez::Piston HorizOdomUp('C');