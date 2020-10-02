/*
 * AllPathsFromSourceToTarget.h
 *
 *  Created on: Jul 25, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK4_ALLPATHSFROMSOURCETOTARGET_H_
#define CHALLENGES_2020_JULY_WEEK4_ALLPATHSFROMSOURCETOTARGET_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class AllPathsFromSourceToTarget {
public:
	AllPathsFromSourceToTarget();
	virtual ~AllPathsFromSourceToTarget();
	vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& );
	void dfs(vector<vector<int>>& , int , int ,
	                        vector<vector<int>>& , vector<int>& );
};

#endif /* CHALLENGES_2020_JULY_WEEK4_ALLPATHSFROMSOURCETOTARGET_H_ */
