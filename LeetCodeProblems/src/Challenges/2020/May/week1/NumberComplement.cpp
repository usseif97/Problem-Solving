#include "NumberComplement.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumberComplement::NumberComplement() {
	// TODO Auto-generated constructor stub

}

NumberComplement::~NumberComplement() {
	// TODO Auto-generated destructor stub
}

int NumberComplement::findComplement(int num) {

    int result = 0;
    int power = 1;
    while(num > 0){
        result += ((num % 2) ^ 1) * power; //XOR the Number With 1's then place it in its position
        num >>= 1;
        power <<= 1;
    }
    return result;
}

