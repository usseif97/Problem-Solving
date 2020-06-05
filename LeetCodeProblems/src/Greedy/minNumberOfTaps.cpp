#include "minNumberOfTaps.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

minNumberOfTaps::minNumberOfTaps() {
	// TODO Auto-generated constructor stub

}

minNumberOfTaps::~minNumberOfTaps() {
	// TODO Auto-generated destructor stub
}

int minTaps(int n, vector<int>& ranges) {

	vector<vector<int>> vec;
	//Initialize 2D Vector
	for (int i = 0; i < ranges.size(); i++){
		// construct a vector of ints with given default value
		std::vector<int> v;
		// push back above one-dimensional vector
		vec.push_back(v);
	}
	for(int i = 0; i < ranges.size(); i++){
		if(i - ranges[i] < 0){
			vec[i].push_back(0);
		}else {
			vec[i].push_back(i - ranges[i]);
        }
		vec[i].push_back(i + ranges[i]);
	}

	int start = 0;
	int count = 0;

	while(true){
		int maxend = -1;
		for(int i = 0; i < vec.size(); i++){
			int end = vec[i][1];
			if(end > maxend &&  vec[i][0] <= start && end > start){
				maxend = end;
			}
		}

		count++;
		start = maxend;
		if(start >= n)return count; //goal
		if(start == -1)return -1; // its not possible improve start time
	}

	return -1;


}
