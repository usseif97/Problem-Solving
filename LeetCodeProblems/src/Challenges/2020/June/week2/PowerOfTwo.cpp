#include "PowerOfTwo.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PowerOfTwo::PowerOfTwo() {
	// TODO Auto-generated constructor stub

}

PowerOfTwo::~PowerOfTwo() {
	// TODO Auto-generated destructor stub
}

bool PowerOfTwo::isPowerOfTwo(int n) {

    if(n==0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));

}

