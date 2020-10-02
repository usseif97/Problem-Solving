/*
 * ImageOverlap.h
 *
 *  Created on: Sep 7, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_SEPTEMBER_WEEK1_IMAGEOVERLAP_H_
#define CHALLENGES_2020_SEPTEMBER_WEEK1_IMAGEOVERLAP_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class ImageOverlap {
public:
	ImageOverlap();
	virtual ~ImageOverlap();
	int largestOverlap(vector<vector<int>>& , vector<vector<int>>& );
	int countOverlaps(vector<vector<int>>& , vector<vector<int>>& , int , int );
};

#endif /* CHALLENGES_2020_SEPTEMBER_WEEK1_IMAGEOVERLAP_H_ */
