#include "ReverseBits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ReverseBits::ReverseBits() {
	// TODO Auto-generated constructor stub

}

ReverseBits::~ReverseBits() {
	// TODO Auto-generated destructor stub
}

uint32_t reverseBiits(uint32_t n) {

    uint32_t reverse = 0;
    int bitPlace = 31;

    // iterate on each bit of the number from Right to Left
    while(n){
        int bit = n & 1;
        reverse += bit << bitPlace;

        n >>= 1;
        bitPlace--;
    }
    return reverse;
}

