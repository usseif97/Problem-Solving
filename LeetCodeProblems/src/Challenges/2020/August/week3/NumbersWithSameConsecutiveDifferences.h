/*
 * NumbersWithSameConsecutiveDifferences.h
 *
 *  Created on: Aug 18, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_AUGUST_WEEK3_NUMBERSWITHSAMECONSECUTIVEDIFFERENCES_H_
#define CHALLENGES_2020_AUGUST_WEEK3_NUMBERSWITHSAMECONSECUTIVEDIFFERENCES_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class NumbersWithSameConsecutiveDifferences {
public:
	NumbersWithSameConsecutiveDifferences();
	virtual ~NumbersWithSameConsecutiveDifferences();
	void dfs(int , int , int , vector<int>& );
	vector<int> numsSameConsecDiff(int , int );
};

#endif /* CHALLENGES_2020_AUGUST_WEEK3_NUMBERSWITHSAMECONSECUTIVEDIFFERENCES_H_ */
