#include "LastStoneWeight.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

LastStoneWeight::LastStoneWeight() {
	// TODO Auto-generated constructor stub

}

LastStoneWeight::~LastStoneWeight() {
	// TODO Auto-generated destructor stub
}

int lastStoneWeight(vector<int>& stones) {


    while(stones.size() >= 2){
        sort(stones.begin(), stones.end());
        int newStone = stones[stones.size() - 1] -
            stones[stones.size() - 2];

        stones.erase(stones.begin() + stones.size() - 1);
        stones.erase(stones.begin() + stones.size() - 1);

        if(newStone != 0)
            stones.push_back(newStone);
    }

    if(stones.size() == 0)
        return 0;
    else
        return stones[0];
}
