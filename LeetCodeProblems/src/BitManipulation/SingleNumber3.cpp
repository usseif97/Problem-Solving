#include "SingleNumber3.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SingleNumber3::SingleNumber3() {
	// TODO Auto-generated constructor stub

}

SingleNumber3::~SingleNumber3() {
	// TODO Auto-generated destructor stub
}

vector<int> singleNumber(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();

    vector<int> solution;

    for(int i = 0; i < n - 1; i++){
        if(nums[i] == nums[i + 1]){
            i++;
        } else {
            solution.push_back(nums[i]);
        }
    }
    if(solution.size() == 1){
        solution.push_back(nums[n - 1]);
    }
    return solution;
}

