#include "SearchInsertPosition.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SearchInsertPosition::SearchInsertPosition() {
	// TODO Auto-generated constructor stub

}

SearchInsertPosition::~SearchInsertPosition() {
	// TODO Auto-generated destructor stub
}

int SearchInsertPosition::searchInsert(vector<int>& nums, int target) {

    int index = -1;
    int flag = 1; // for entering condition one time only

    for(int i = 0; i < nums.size(); i++){
        if (nums[i] == target){
            index = i;
            break;
        }
        if (target < nums[i] && flag == 1){
            index = i;
            cout<<index<<endl;
            flag = 0;
        }
    }


    if(index != -1){
        return index;
    } else {
        return nums.size(); // the last element
    }

