#include "UglyNumber2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

UglyNumber2::UglyNumber2() {
	// TODO Auto-generated constructor stub

}

UglyNumber2::~UglyNumber2() {
	// TODO Auto-generated destructor stub
}

int UglyNumber2::nthUglyNumber(int n) {

    vector<int> uglyNumbers;
    uglyNumbers.push_back(1);

    int twoIndex = 0;
    int threeIndex = 0;
    int fiveIndex = 0;

    int size = n;

    while(n-- > 0){

        int twoMultiples = uglyNumbers[twoIndex] * 2;
        int threeMultiples = uglyNumbers[threeIndex] * 3;
        int fiveMultiples = uglyNumbers[fiveIndex] * 5;

        int minimium = min(twoMultiples,min(threeMultiples,fiveMultiples));
        uglyNumbers.push_back(minimium);

        // if not elseif because minimium can be equal in the all cases
        if(minimium == twoMultiples)
            twoIndex++;
        if(minimium == threeMultiples)
            threeIndex++;
        if(minimium == fiveMultiples)
            fiveIndex++;
    }
    return uglyNumbers[size - 1];
}

