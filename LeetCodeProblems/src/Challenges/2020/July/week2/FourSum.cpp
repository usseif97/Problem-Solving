#include "FourSum.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FourSum::FourSum() {
	// TODO Auto-generated constructor stub

}

FourSum::~FourSum() {
	// TODO Auto-generated destructor stub
}

// O(n^3)

vector<vector<int>> FourSum::fourSumm(vector<int>& nums, int target) {

    if(nums.size() < 3)
        return {};

    sort(nums.begin(), nums.end());
    int n = nums.size();

    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            int remainder = target - (nums[i] + nums[j]);
            twoSum(nums, nums[i], nums[j], remainder, j + 1);
        }
    }

    // To avoid duplicates
    sort( solution.begin(), solution.end() );
    solution.erase( unique( solution.begin(), solution.end() ), solution.end() );

    return solution;

}


void FourSum::twoSum(vector<int>& nums, int thirdNumber, int fourthNumber, int target
            , int index){
    int l = index, r = nums.size() - 1;

    while(l < r){
        int sum = nums[l] + nums[r];
        if(sum == target){
            solution.push_back({nums[l], nums[r], thirdNumber, fourthNumber});
            l++;
            r--;
        } else if (sum < target){
           l++;
        } else if (sum > target){
           r--;
        }
    }

}
