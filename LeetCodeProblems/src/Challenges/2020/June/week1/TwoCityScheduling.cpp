#include "TwoCityScheduling.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

TwoCityScheduling::TwoCityScheduling() {
	// TODO Auto-generated constructor stub

}

TwoCityScheduling::~TwoCityScheduling() {
	// TODO Auto-generated destructor stub
}

int TwoCityScheduling::twoCitySchedCost(vector<vector<int>>& costs) {

    int minCost = 0;
    vector<int> costDifference; // w.r.t person B

    for(int i = 0; i < costs.size(); i++){
        costDifference.push_back(costs[i][1] - costs[i][0]);
        minCost += costs[i][0];
    }

    sort(costDifference.begin(), costDifference.end());


    for(int i = 0; i < costs.size() / 2; i++){
        minCost += costDifference[i];
    }

    return minCost;
}
