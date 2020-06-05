#include "CountingBits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CountingBits::CountingBits() {
	// TODO Auto-generated constructor stub

}

CountingBits::~CountingBits() {
	// TODO Auto-generated destructor stub
}

vector<int> CountingBits::countBits(int num) {

	vector<int> v(num+1, 0); // Intialize vector with zero's

	for(int i = 1; i <= num; i++)
		v[i] = v[i / 2] + i % 2; // get number of one's in each number
	return v;

}

