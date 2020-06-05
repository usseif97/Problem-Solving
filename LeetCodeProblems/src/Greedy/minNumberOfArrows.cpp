#include "minNumberOfArrows.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


minNumberOfArrows::minNumberOfArrows() {
	// TODO Auto-generated constructor stub

}

minNumberOfArrows::~minNumberOfArrows() {
	// TODO Auto-generated destructor stub
}

static bool sortcol( const vector<int>& v1,
              const vector<int>& v2 ) {
       return v1[1] < v2[1];
   }

   int minNumberOfArrows::findMinArrowShots(vector<vector<int>>& points) {
       if(points.size() == 0){
           return 0;
       }

       // sort the vector of balloons by ending position
       sort(points.begin(), points.end(), sortcol);

       int range = points[0][1];
       int count = 1;
       for(int i = 1; i < points.size(); i++){ //loop by row
           if(points[i][0] <= range){
               continue;
           }
           count++;
           range = points[i][1];
       }
       return count;

   }
