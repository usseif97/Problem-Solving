#include "HammingDistance.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

HammingDistance::HammingDistance() {
	// TODO Auto-generated constructor stub

}

HammingDistance::~HammingDistance() {
	// TODO Auto-generated destructor stub
}

int HammingDistance::hammingDiistance(int x, int y) {
    vector<int> xBinary(32, 0);
    vector<int> yBinary(32, 0);
    int i = 0, j = 0;
    int count = 0;

    while(x > 0){
        xBinary[i] = x % 2;
        x = x / 2;
        i++;
    }
    while(y > 0){
        yBinary[j] = y % 2;
        y = y / 2;
        j++;
    }

    for(int p = 0; p < xBinary.size(); p++){
        if(xBinary[p] != yBinary[p])
            count++;
    }
    return count;
}
