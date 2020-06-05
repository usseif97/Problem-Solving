/*
 * SurroundedRegions.h (Medium)
 *
 *  Created on: May 12, 2020
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_SURROUNDEDREGIONS_H_
#define DEPTHFIRSTSEARCH_SURROUNDEDREGIONS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class SurroundedRegions {
public:
	SurroundedRegions();
	virtual ~SurroundedRegions();
	void solve(vector<vector<char>>& );
	bool dfs(vector<vector<char>>& , vector<vector<int>>& , int , int );
	void dfsAndFlipping(vector<vector<char>>& , int , int );
};

#endif /* DEPTHFIRSTSEARCH_SURROUNDEDREGIONS_H_ */
