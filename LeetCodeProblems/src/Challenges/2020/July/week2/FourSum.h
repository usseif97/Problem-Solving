/*
 * FourSum.h
 *
 *  Created on: Jul 8, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK2_FOURSUM_H_
#define CHALLENGES_2020_JULY_WEEK2_FOURSUM_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class FourSum {
public:
	FourSum();
	virtual ~FourSum();
	vector<vector<int>> solution;
	vector<vector<int>> fourSumm(vector<int>& , int );
	void twoSum(vector<int>& , int , int , int , int );
};

#endif /* CHALLENGES_2020_JULY_WEEK2_FOURSUM_H_ */
