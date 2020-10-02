#include "UglyNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

UglyNumber::UglyNumber() {
	// TODO Auto-generated constructor stub

}

UglyNumber::~UglyNumber() {
	// TODO Auto-generated destructor stub
}

bool UglyNumber::isUgly(int num) {

    if(num == 0)
        return false;

    vector<int> factors;
    factors.push_back(2);
    factors.push_back(3);
    factors.push_back(5);

    for(int x : factors){
        while(num % x == 0){
            num /= x;
        }
    }
    return num == 1;
}
