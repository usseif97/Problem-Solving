#include "SortColors.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SortColors::SortColors() {
	// TODO Auto-generated constructor stub

}

SortColors::~SortColors() {
	// TODO Auto-generated destructor stub
}

void SortColors::sortColorrs(vector<int>& nums) {

    for (int i = 1 ;i < nums.size(); i++) {
        int temp = nums[i];

        // Insert nums[j] at its correct position
        int j = i - 1;
        // Sort In Place
        while (j >= 0 && temp < nums[j]) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = temp;
    }
}
