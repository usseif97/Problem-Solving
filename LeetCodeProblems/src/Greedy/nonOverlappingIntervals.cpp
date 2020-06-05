#include "nonOverlappingIntervals.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

nonOverlappingIntervals::nonOverlappingIntervals() {
	// TODO Auto-generated constructor stub

}

nonOverlappingIntervals::~nonOverlappingIntervals() {
	// TODO Auto-generated destructor stub
}

static bool sortcol( const vector<int>& v1,
              const vector<int>& v2 ) {
       return v1[1] < v2[1];
    }

int nonOverlappingIntervals::eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() == 0){
           return 0;
       }

       // sort the vector of balloons by ending position
       sort(intervals.begin(), intervals.end(), sortcol);

       int range = intervals[0][1];
       int count = 0;
       for(int i = 1; i < intervals.size(); i++){ //loop by row
           if(intervals[i][0] < range){
                count++;
           } else{
                range = intervals[i][1];
           }
       }
       return count;

    }

