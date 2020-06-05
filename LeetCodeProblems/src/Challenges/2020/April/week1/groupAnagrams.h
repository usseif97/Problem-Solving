/*
 * groupAnagrams.h
 *
 *  Created on: Apr 13, 2020
 *      Author: Usseif
 */

#ifndef WEEK1_GROUPANAGRAMS_H_
#define WEEK1_GROUPANAGRAMS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class groupAnagrams {
public:
	groupAnagrams();
	virtual ~groupAnagrams();
	vector<vector<string>> groupanagrams(vector<string>&);
	int containsKey(string str);
    vector<pair<string, vector<string>>> anagrams;

};

#endif /* WEEK1_GROUPANAGRAMS_H_ */
