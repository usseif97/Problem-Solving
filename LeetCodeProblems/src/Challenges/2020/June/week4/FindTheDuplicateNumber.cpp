#include "FindTheDuplicateNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FindTheDuplicateNumber::FindTheDuplicateNumber() {
	// TODO Auto-generated constructor stub

}

FindTheDuplicateNumber::~FindTheDuplicateNumber() {
	// TODO Auto-generated destructor stub
}

int findDuplicate(vector<int>& nums) {

   sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++){
       if(nums[i] == nums[i + 1])
           return nums[i];
    }
    return 0;
}

