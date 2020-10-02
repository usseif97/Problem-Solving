#include "Subsets.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

Subsets::Subsets() {
	// TODO Auto-generated constructor stub

}

Subsets::~Subsets() {
	// TODO Auto-generated destructor stub
}


vector<vector<int>> Subsets::subsetss(vector<int>& nums) {
    // Number of subsets = 2^No_of_elements

    int n = nums.size();
    int numberOfSubsets = 1<<n;  // 2^n

    vector<vector<int>> solution;

    for(int i = 0; i < numberOfSubsets; i++){
        vector<int> subset = findSubSet(i, nums);
        solution.push_back(subset);
    }
    return solution;
}

vector<int> Subsets::findSubSet(int number, vector<int>& nums){
    // Bitwise
    vector<int> sub;
    int i = 0;

    while(number){
        // take each bit on the number(0,1) individually
        // if equal 1 push on vector else if equal 0 continue
        if(number & 1){
            sub.push_back(nums[i]);
        }
        i++;
        number >>= 1;
    }
    return sub;
}

