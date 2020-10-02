#include "FindMinimumInRotatedSortedArray2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FindMinimumInRotatedSortedArray2::FindMinimumInRotatedSortedArray2() {
	// TODO Auto-generated constructor stub

}

FindMinimumInRotatedSortedArray2::~FindMinimumInRotatedSortedArray2() {
	// TODO Auto-generated destructor stub
}

int findMin(vector<int>& nums) {

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < nums[i - 1])
            return nums[i];
    }
    return nums[0];
}

