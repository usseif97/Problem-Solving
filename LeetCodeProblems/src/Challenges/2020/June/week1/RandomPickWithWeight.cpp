#include "RandomPickWithWeight.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RandomPickWithWeight::RandomPickWithWeight() {
	// TODO Auto-generated constructor stub

}

RandomPickWithWeight::~RandomPickWithWeight() {
	// TODO Auto-generated destructor stub
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */

// the problem is generating large array of size 10^9
vector<int> wSum;
Solution(vector<int>& w) {
    int accSum = 0;
    for(int weight : w){
        accSum += weight;
        wSum.push_back(accSum);
    }
}

int pickIndex() {
    int randomPick = rand() % wSum[wSum.size() - 1];  // Generate random variable from 0 to wSum.size() - 1
    for(int i = 0; i < wSum.size(); i++){
        if(randomPick < wSum[i])
            return i;
    }
    return -1;
}
