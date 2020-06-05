#include "happyNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

happyNumber::happyNumber() {
	// TODO Auto-generated constructor stub

}

happyNumber::~happyNumber() {
	// TODO Auto-generated destructor stub
}

bool happyNumber::isHappy(int n) {
    if (n == 1 || n == 7){
        return true;
    }
    int sum = n;
    int x = n;
    while (sum > 9){
        sum = 0;
        while (x > 0){
            int d = x%10;
            sum += d*d;
            x /= 10;
        }
        x = sum;
        if (sum == 1){
            return true;
        }
    }
    if (sum == 7){
        return true;
    } else {
        return false;
    }
}

