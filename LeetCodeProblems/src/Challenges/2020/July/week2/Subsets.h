/*
 * Subsets.h
 *
 *  Created on: Jul 11, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK2_SUBSETS_H_
#define CHALLENGES_2020_JULY_WEEK2_SUBSETS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class Subsets {
public:
	Subsets();
	virtual ~Subsets();
	vector<vector<int>> subsetss(vector<int>& );
	vector<int> findSubSet(int , vector<int>& );
};

#endif /* CHALLENGES_2020_JULY_WEEK2_SUBSETS_H_ */
