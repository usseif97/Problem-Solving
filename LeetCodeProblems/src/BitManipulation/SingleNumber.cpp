#include "SingleNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SingleNumber::SingleNumber() {
	// TODO Auto-generated constructor stub

}

SingleNumber::~SingleNumber() {
	// TODO Auto-generated destructor stub
}

int singleNumberr(vector<int>& nums) {
    int res = nums[0];
    for (int i = 1; i < nums.size(); i++){
        res = res ^ nums[i];
    }
    return res;
}

