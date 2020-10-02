#include "AddDigits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

AddDigits::AddDigits() {
	// TODO Auto-generated constructor stub

}

AddDigits::~AddDigits() {
	// TODO Auto-generated destructor stub
}

int AddDigits::addDiigits(int num) {

    int digitSum = 0;

    while(num > 0){
        digitSum += num % 10;  // To get each Digit in the Number then add it
        num /= 10;

        if(num == 0 && digitSum > 9){ // new Number is formed
            num = digitSum;
            digitSum = 0;
        }
    }
    return digitSum;
}

