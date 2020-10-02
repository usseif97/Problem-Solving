#include "PartitionLabels.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PartitionLabels::PartitionLabels() {
	// TODO Auto-generated constructor stub

}

PartitionLabels::~PartitionLabels() {
	// TODO Auto-generated destructor stub
}

vector<int> partitionLabels(string S) {

    vector<int> lastOcuurenceIndex(26, 0);
    for(int i = 0; i < S.size(); i++)
        lastOcuurenceIndex[S[i] - 'a'] = i;

    vector<int> result;
    int j = 0;
    int subStrStart = 0;
    for(int i = 0; i < S.size(); i++){
        j = max(j, lastOcuurenceIndex[S[i] - 'a']);
        if(i == j){
            result.push_back(j - subStrStart + 1);
            subStrStart = i + 1;
        }
    }
   return result;
}
