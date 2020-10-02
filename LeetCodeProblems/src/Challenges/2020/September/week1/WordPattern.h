/*
 * WordPattern.h
 *
 *  Created on: Sep 9, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_SEPTEMBER_WEEK1_WORDPATTERN_H_
#define CHALLENGES_2020_SEPTEMBER_WEEK1_WORDPATTERN_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class WordPattern {
public:
	WordPattern();
	virtual ~WordPattern();
	vector<string> splitBySpace(string );
	bool wordPattern(string , string );
};

#endif /* CHALLENGES_2020_SEPTEMBER_WEEK1_WORDPATTERN_H_ */
