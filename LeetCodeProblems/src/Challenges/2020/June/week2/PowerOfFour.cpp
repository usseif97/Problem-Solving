#include "PowerOfFour.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PowerOfFour::PowerOfFour() {
	// TODO Auto-generated constructor stub

}

PowerOfFour::~PowerOfFour() {
	// TODO Auto-generated destructor stub
}



bool isPowerOfFour(int num) {

	if (num <= 0)
		return false;
	while (num % 4 == 0)
		num /= 4;

    return num == 1;

}
