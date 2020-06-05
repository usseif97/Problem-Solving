/*
 * NumberOfClosedIslands.h (Medium)
 *
 *  Created on: May 12, 2020
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_NUMBEROFCLOSEDISLANDS_H_
#define DEPTHFIRSTSEARCH_NUMBEROFCLOSEDISLANDS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class NumberOfClosedIslands {
public:
	NumberOfClosedIslands();
	virtual ~NumberOfClosedIslands();
	int closedIsland(vector<vector<int>>& );
	bool dfs(vector<vector<int>>& , vector<vector<int>>& , int , int );
};

#endif /* DEPTHFIRSTSEARCH_NUMBEROFCLOSEDISLANDS_H_ */
