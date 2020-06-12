#include "QueueReconstructionByHeight.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

QueueReconstructionByHeight::QueueReconstructionByHeight() {
	// TODO Auto-generated constructor stub

}

QueueReconstructionByHeight::~QueueReconstructionByHeight() {
	// TODO Auto-generated destructor stub
}


vector<vector<int>> QueueReconstructionByHeight::reconstructQueue(vector<vector<int>>& people) {

    vector<vector<int>>result;

    // sort vector according to height (0 index) descendingly and
    // if there's conflict get with least number of people (1 index)
    sort(people.begin(),people.end(),[](const vector<int>& a,const vector<int>& b){
		     return (a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]));
    });

    // insert each person in index accordin to number of persons (1 index)
    for(vector<int>& x: people)
        result.insert(result.begin() + x[1], x);
    // result.begin() return iterator to first element in vector
    // used in insert() function

    return result;
}
