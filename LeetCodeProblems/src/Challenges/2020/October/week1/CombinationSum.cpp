#include "CombinationSum.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CombinationSum::CombinationSum() {
	// TODO Auto-generated constructor stub

}

CombinationSum::~CombinationSum() {
	// TODO Auto-generated destructor stub
}

void backtracking(vector<int> candidates, int target, vector<vector<int>>& combinations,
                  vector<int>& current, int index){

    if(target == 0){
        combinations.push_back(current);
        return;
    }

    if(target < 0 || index >= candidates.size())
        return;

    current.push_back(candidates[index]);
    backtracking(candidates, target - candidates[index], combinations, current, index);
    // till here all is good
    current.pop_back();
    backtracking(candidates, target, combinations, current, index + 1);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> combinations;
    vector<int> current;

    backtracking(candidates, target, combinations, current, 0);
    return combinations;

}

