/*
 * ThreeSum.h
 *
 *  Created on: Jul 8, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK2_THREESUM_H_
#define CHALLENGES_2020_JULY_WEEK2_THREESUM_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class ThreeSum {
public:
	ThreeSum();
	virtual ~ThreeSum();
	vector<vector<int>> solution;
	vector<vector<int>> threeSumm(vector<int>& );
	void twoSum(vector<int>& , int , int , int );

};

#endif /* CHALLENGES_2020_JULY_WEEK2_THREESUM_H_ */
