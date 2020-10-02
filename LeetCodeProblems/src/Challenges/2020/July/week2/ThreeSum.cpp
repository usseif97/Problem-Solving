#include "ThreeSum.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ThreeSum::ThreeSum() {
	// TODO Auto-generated constructor stub

}

ThreeSum::~ThreeSum() {
	// TODO Auto-generated destructor stub
}

// O(n^2)

vector<vector<int>> ThreeSum::threeSumm(vector<int>& nums) {

    if(nums.size() < 3)
        return {};

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 2; i++){
        if(i == 0 || nums[i] != nums[i - 1]){  // To avoid duplicates
            int remainder = 0 - nums[i];
            twoSum(nums, nums[i], remainder, i + 1);
        }

    }
    return solution;
}

void ThreeSum::twoSum(vector<int>& nums, int thirdNumber, int target, int index){
    int l = index, r = nums.size() - 1;

    while(l < r){
        int sum = nums[l] + nums[r];
        if(sum == target){
            solution.push_back({nums[l], nums[r], thirdNumber});
            while(l < r && nums[l] == nums[l + 1])  // To avoid duplicates
                l++;
            while(l < r && nums[r] == nums[r - 1])  // To avoid duplicates
                r--;
            l++;
            r--;
        } else if (sum < target){
           l++;
        } else if (sum > target){
           r--;
        }
    }

}
