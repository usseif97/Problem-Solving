#include "moveZeros.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

moveZeros::moveZeros() {
	// TODO Auto-generated constructor stub

}

moveZeros::~moveZeros() {
	// TODO Auto-generated destructor stub
}

void moveZeros::movezeroes(vector<int>& nums) {
       int tempIndex = -1;
       int count = 0;
       for (int i = 0; i < nums.size(); i++){
          if (nums[i] != 0){
              tempIndex++;
              nums[tempIndex] = nums[i];
          } else {
              count++;
          }
       }
       tempIndex++;
       while(count > 0){
           nums[tempIndex] = 0;
           tempIndex++;
           count--;
       }

   }

