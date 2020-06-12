#include "PlayWithChips.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PlayWithChips::PlayWithChips() {
	// TODO Auto-generated constructor stub

}

PlayWithChips::~PlayWithChips() {
	// TODO Auto-generated destructor stub
}

int PlayWithChips::minCostToMoveChips(vector<int>& chips) {

    int evenNumbers = 0, oddNumbers = 0;

    for(int x : chips){
        if(x % 2 != 0)
            oddNumbers++;
        else
            evenNumbers++;

    }
    return min(oddNumbers, evenNumbers);

}

