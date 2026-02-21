#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Channel(9);
inline pros::Motor Scorer(11);
inline ez::Piston MatchLoader('B');
inline ez::Piston ScoreSwitcher('A');
inline ez::Piston DescoreWings('H');