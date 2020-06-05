/*
 * KClosestPointsToOrigin.h
 *
 *  Created on: May 30, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_MAY_WEEK5_KCLOSESTPOINTSTOORIGIN_H_
#define CHALLENGES_MAY_WEEK5_KCLOSESTPOINTSTOORIGIN_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class KClosestPointsToOrigin {
public:
	KClosestPointsToOrigin();
	virtual ~KClosestPointsToOrigin();
	vector<vector<int>> kClosest(vector<vector<int>>& , int );
	float distance(int , int );
};

#endif /* CHALLENGES_MAY_WEEK5_KCLOSESTPOINTSTOORIGIN_H_ */
