#include "singleNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


singleNumber::singleNumber() {
	// TODO Auto-generated constructor stub

}

singleNumber::~singleNumber() {
	// TODO Auto-generated destructor stub
}

int singleNumber::singlenumber(vector<int>& nums) {
	int res = nums[0];
    for (int i = 1; i < nums.size(); i++){
    	res = res ^ nums[i];
    }
    return res;
}

