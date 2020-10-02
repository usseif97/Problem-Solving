#include "TwoSum.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

TwoSum::TwoSum() {
	// TODO Auto-generated constructor stub

}

TwoSum::~TwoSum() {
	// TODO Auto-generated destructor stub
}

vector<int> TwoSum::twoSumm(vector<int>& nums, int target) {

    vector<int> solution;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == target - nums[i]) {
                solution.push_back(i);
                solution.push_back(j);
            }
        }
    }
    return solution;
}
