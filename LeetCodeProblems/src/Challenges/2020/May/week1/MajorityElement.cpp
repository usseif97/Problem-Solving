#include "MajorityElement.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

MajorityElement::MajorityElement() {
	// TODO Auto-generated constructor stub

}

MajorityElement::~MajorityElement() {
	// TODO Auto-generated destructor stub
}

int MajorityElement::majorityElement(vector<int>& nums) {

    int taken[nums.size()];  // declare the array and then...
    for (int i = 0; i < nums.size(); i++){ // ...initialize it
	    taken[i] = 0;
    }

    int result = 0;

    for(int i = 0; i < nums.size(); i++){
		if(taken[i] == 1){
			continue;
		}
        int count = 1;
        for(int j = i+1; j < nums.size(); j++){
        	if(nums[i] == nums[j]){
        		taken[j] = 1;
                count++;
             }
        }
        if (count > floor(nums.size()/2)){
            result = nums[i];
            break;
        }
	}
    return result;
}

