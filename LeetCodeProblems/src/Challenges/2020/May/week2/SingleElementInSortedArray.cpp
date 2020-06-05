#include "SingleElementInSortedArray.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SingleElementInSortedArray::SingleElementInSortedArray() {
	// TODO Auto-generated constructor stub

}

SingleElementInSortedArray::~SingleElementInSortedArray() {
	// TODO Auto-generated destructor stub
}

int SingleElementInSortedArray::singleNonDuplicate(vector<int>& nums) {

	// nums[mid] == nums[mid ^ 1] for odd position compares with the previous number;
	// for even position compares with the next number.
	// The unique number must be at even position.
	/*	int start=0, end = nums.size()-1, mid;
	while( start < end ) {
		mid = start + (end-start)/2;
		if( nums[mid] == nums[mid ^ 1] )
			start = mid + 1;
		else
			end = mid;
	}
	return nums[start];*/

    int result = nums[0];
    for(int i = 1; i < nums.size(); i++){
        result = result ^ nums[i];
    }
    return result;
}

