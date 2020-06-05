#include "videoStitching.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

videoStitching::videoStitching() {
	// TODO Auto-generated constructor stub

}

videoStitching::~videoStitching() {
	// TODO Auto-generated destructor stub
}


int videoStitching::videoStiitching(vector<vector<int>>& clips, int T) {
	  // O(n^2)
	  int start = 0;
	  int count = 0;

	  while(true){
		  int maxend = -1;
		  for(int i = 0; i < clips.size(); i++){
			  int end = clips[i][1];
			  if(end > maxend &&  clips[i][0] <= start && end > start){
				  // get the MAXEnd that can be get with preserving Overlapping
				  maxend = end;
			  }
		  }
		  count++;
		  start = maxend;
		  if(start >= T)return count; //goal
		  if(start ==- 1)return -1; // its not possible improve start time
	  }
	  return -1;
}


