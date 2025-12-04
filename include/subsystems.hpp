#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Channel(18);
inline pros::Motor Scorer(13);
inline ez::Piston MatchLoader('H');
inline ez::Piston ScoreSwitcher('A');
inline ez::Piston DescoreWings('B');