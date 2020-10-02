#include "TwoSum2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

TwoSum2::TwoSum2() {
	// TODO Auto-generated constructor stub

}

TwoSum2::~TwoSum2() {
	// TODO Auto-generated destructor stub
}

vector<int> TwoSum2::twoSum(vector<int>& numbers, int target) {

    int l = 0, r = numbers.size() - 1;
    vector<int> solution;

    while(l < r){
        int sum = numbers[l] + numbers[r];
        if(sum == target){
            solution.push_back(l + 1);
            solution.push_back(r + 1);
            while(l < r && numbers[l] == numbers[l + 1])  // To avoid duplicates
                l++;
            while(l < r && numbers[r] == numbers[r - 1])  // To avoid duplicates
                r--;
            l++;
            r--;
        } else if (sum < target){
           l++;
        } else if (sum > target){
           r--;
        }
    }
    return solution;
}
