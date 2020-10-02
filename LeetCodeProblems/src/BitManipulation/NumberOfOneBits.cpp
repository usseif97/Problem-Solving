#include "NumberOfOneBits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumberOfOneBits::NumberOfOneBits() {
	// TODO Auto-generated constructor stub

}

NumberOfOneBits::~NumberOfOneBits() {
	// TODO Auto-generated destructor stub
}

int hammingWeight(uint32_t n) {

    int bits = 0;

    for (int i = 0; i < 32; i++) {
        if (n & 1) {
            bits++;
        }
        n >>= 1;
    }
    return bits;
}

