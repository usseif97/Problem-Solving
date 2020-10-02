#include "DistributeCandiesToPeople.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

DistributeCandiesToPeople::DistributeCandiesToPeople() {
	// TODO Auto-generated constructor stub

}

DistributeCandiesToPeople::~DistributeCandiesToPeople() {
	// TODO Auto-generated destructor stub
}

vector<int> distributeCandies(int candies, int num_people) {

    vector<int> result(num_people);
    int index = 0;
    int increment = 1;

    while(candies > 0){
        // index++, access index, then increment it
        result[index++ % num_people] += min(increment, candies);  // the last one take the rest of Candies
        candies -= increment;
        increment++;
    }
    return result;
}
