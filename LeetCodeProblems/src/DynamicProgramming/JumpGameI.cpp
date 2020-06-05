#include "JumpGameI.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

JumpGameI::JumpGameI() {
	// TODO Auto-generated constructor stub

}

JumpGameI::~JumpGameI() {
	// TODO Auto-generated destructor stub
}

int JumpGameI::min(int x, int y){
    if (x <= y){
        return x;
    } else {
        return y;
    }
}

int JumpGameI::canJump(vector<int>& nums) {

    int memo[nums.size()];
    for(int i = 0; i < nums.size(); i++){
        memo[i] = 0;
    }
    memo[nums.size() - 1] = 1;

    for(int i = nums.size() - 2; i >= 0; i--){
        int furthestJump = min(i + nums[i], nums.size() - 1);
        for(int j = i + 1; j <= furthestJump; j++){
            if(memo[j] == 1){
                memo[i] = 1;
                break;
            }
        }
    }

    return memo[0] == 1;

}

