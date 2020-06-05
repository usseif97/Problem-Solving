#include "maxSubArray.h"
#include <climits>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


maxSubArray::maxSubArray() {
	// TODO Auto-generated constructor stub

}

maxSubArray::~maxSubArray() {
	// TODO Auto-generated destructor stub
}

int maxSubArray::maxsubArray(vector<int>& nums) {
	int maxSoFar = INT_MIN;
    int maxTemp = 0;
    for (int i = 0; i < nums.size(); i++){
    	maxTemp += nums[i];
        if(maxSoFar < maxTemp){
        	maxSoFar = maxTemp;
        }
        if(maxTemp < 0){
        	maxTemp = 0;
        }
    }
    return maxSoFar;
}

