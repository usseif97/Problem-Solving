/*
 * CompareVersionNumbers.h
 *
 *  Created on: Sep 9, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_SEPTEMBER_WEEK2_COMPAREVERSIONNUMBERS_H_
#define CHALLENGES_2020_SEPTEMBER_WEEK2_COMPAREVERSIONNUMBERS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class CompareVersionNumbers {
public:
	CompareVersionNumbers();
	virtual ~CompareVersionNumbers();
	vector<int> splitByDot(string );
	string removeLeadingZeros(string );
	int compareVersion(string , string );
};

#endif /* CHALLENGES_2020_SEPTEMBER_WEEK2_COMPAREVERSIONNUMBERS_H_ */
