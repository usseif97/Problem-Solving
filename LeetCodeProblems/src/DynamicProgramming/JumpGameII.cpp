#include "JumpGameII.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

JumpGameII::JumpGameII() {
	// TODO Auto-generated constructor stub

}

JumpGameII::~JumpGameII() {
	// TODO Auto-generated destructor stub
}

int JumpGameII::min(int x, int y){
    if (x <= y){
        return x;
    } else {
        return y;
    }
}

int JumpGameII::jump(vector<int>& nums) {
	 int memo[nums.size()];
	 for(int i = 0; i < nums.size(); i++){
		 memo[i] = INT_MAX;
	 }
	 memo[0] = 0;

	 int fromLast = 1;
	 for(int j = 0; j < nums.size() ; j++){
		 int furthestJump = min(j + nums[j], nums.size() - 1);
	     for(int i = fromLast; i <= furthestJump ; i++){ // Order(n) with the modification
	    	 memo[i] = min(memo[i], memo[j] + 1);
	      }
	      fromLast = furthestJump;
	  }
	 return memo[nums.size() - 1];

}

