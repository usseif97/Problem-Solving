#include "FindAllDuplicatesInArray.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FindAllDuplicatesInArray::FindAllDuplicatesInArray() {
	// TODO Auto-generated constructor stub

}

FindAllDuplicatesInArray::~FindAllDuplicatesInArray() {
	// TODO Auto-generated destructor stub
}

vector<int> findDuplicates(vector<int>& nums) {

    if(nums.empty())
        return {};

    sort(nums.begin(), nums.end());
    vector<int> duplicates;

    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] == nums[i+1]){
            duplicates.push_back(nums[i]);
            i++;
        }
    }
    return duplicates;
}
