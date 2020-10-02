#include "SearchInRotatedSortedArray.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SearchInRotatedSortedArray::SearchInRotatedSortedArray() {
	// TODO Auto-generated constructor stub

}

SearchInRotatedSortedArray::~SearchInRotatedSortedArray() {
	// TODO Auto-generated destructor stub
}

int SearchInRotatedSortedArray::search(vector<int>& nums, int target) {

    // Indices
    int left = 0;
    int right = nums.size() - 1;

    if(nums.size() == 0)
        return -1;

    if(nums[left] == target)
        return left;
    if(nums[right] == target)
        return right;

    return binarySearch(nums, target, left, right);
}


int SearchInRotatedSortedArray::binarySearch(vector<int>& nums, int target, int left, int right){

    while(left <= right){
        // Index
        int mid = left + (right - left) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] >= nums[left]) { // therefore, left half is sorted
            if(target >= nums[left] && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else if(nums[mid] <= nums[right]) { // therefore, righ half is sorted
            if(target <= nums[right] && target > nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }

    }

    return -1;
}
