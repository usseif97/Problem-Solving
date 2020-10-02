#include "AngleBetweenHandsOfClock.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

AngleBetweenHandsOfClock::AngleBetweenHandsOfClock() {
	// TODO Auto-generated constructor stub

}

AngleBetweenHandsOfClock::~AngleBetweenHandsOfClock() {
	// TODO Auto-generated destructor stub
}

double AngleBetweenHandsOfClock::angleClock(int hour, int minutes) {

    // 5 min = 30 deg. (hour)
    // 1 min = 30/5 = 6 deg. (minutes)
    // Every minute hour hand goes by 0.5 minutes.

    double hour_angle = (hour % 12 ) * 30 + minutes * 0.5;
    double minute_angle = minutes * 6;

    double diff = abs(hour_angle - minute_angle);
    return min(diff, 360 - diff);
}
