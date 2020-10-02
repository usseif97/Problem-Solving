#include "SingleNumber2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SingleNumber2::SingleNumber2() {
	// TODO Auto-generated constructor stub

}

SingleNumber2::~SingleNumber2() {
	// TODO Auto-generated destructor stub
}

int singleNumber(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();

    for(int i = 0; i < n - 1; i++){
        if(nums[i] == nums[i + 1]){
            i += 2;
        } else {
            return nums[i];
        }
    }
    return nums[n - 1];
}

