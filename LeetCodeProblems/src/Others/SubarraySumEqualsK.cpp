#include "SubarraySumEqualsK.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SubarraySumEqualsK::SubarraySumEqualsK() {
	// TODO Auto-generated constructor stub

}

SubarraySumEqualsK::~SubarraySumEqualsK() {
	// TODO Auto-generated destructor stub
}

int SubarraySumEqualsK::subarraySum(vector<int>& nums, int k) {

    int sum = 0, count = 0;
    // unordered Map search in O(1) on average
    unordered_map<int,int> map;
    map[0] = 1;

    for(int x : nums){
        sum += x;
        count += map[sum - k];
        cout<<count<<endl;
        map[sum]++;
    }
    return count;
}
