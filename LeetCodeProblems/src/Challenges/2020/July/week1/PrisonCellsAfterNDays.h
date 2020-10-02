/*
 * PrisonCellsAfterNDays.h
 *
 *  Created on: Jul 4, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK1_PRISONCELLSAFTERNDAYS_H_
#define CHALLENGES_2020_JULY_WEEK1_PRISONCELLSAFTERNDAYS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class PrisonCellsAfterNDays {
public:
	PrisonCellsAfterNDays();
	virtual ~PrisonCellsAfterNDays();
	vector<int> prisonAfterNDays(vector<int>& , int );
	vector<int> nextDay(vector<int>& );
};

#endif /* CHALLENGES_2020_JULY_WEEK1_PRISONCELLSAFTERNDAYS_H_ */
