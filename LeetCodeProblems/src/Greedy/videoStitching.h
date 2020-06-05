/*
 * videoStitching.h (Medium) Like minNumberOfTapes Problem
 *
 *  Created on: Apr 24, 2020
 *      Author: Usseif
 */

#ifndef GREEDY_VIDEOSTITCHING_H_
#define GREEDY_VIDEOSTITCHING_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class videoStitching {
public:
	videoStitching();
	virtual ~videoStitching();
	/*static bool sortcol( const vector<int>& ,
	          const vector<int>&  );*/
	int videoStiitching(vector<vector<int>>& , int );
};

#endif /* GREEDY_VIDEOSTITCHING_H_ */
