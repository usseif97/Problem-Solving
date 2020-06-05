#include "minSubSequenceInNonDecreasingOrder.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

minSubSequenceInNonDecreasingOrder::minSubSequenceInNonDecreasingOrder() {
	// TODO Auto-generated constructor stub

}

minSubSequenceInNonDecreasingOrder::~minSubSequenceInNonDecreasingOrder() {
	// TODO Auto-generated destructor stub
}

vector<int> minSubSequenceInNonDecreasingOrder::minSubsequence(vector<int>& nums) {
       int tempSum = 0;
       int sum = 0;
       vector<int> output;
       sort(nums.begin(), nums.end());

       if(nums.size() == 1){
           output.push_back(nums[0]);
           return output;
       }

        for(int i = 0; i < nums.size(); i++){
           sum += nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--){
            tempSum += nums[i];
            output.push_back(nums[i]);
            sum -= nums[i];
            if(tempSum > sum){
                break;
            }
        }
       return output;
   }

