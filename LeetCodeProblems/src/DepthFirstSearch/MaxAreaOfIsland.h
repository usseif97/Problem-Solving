/*
 * MaxAreaOfIsland.h (Medium)
 *
 *  Created on: May 12, 2020
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_MAXAREAOFISLAND_H_
#define DEPTHFIRSTSEARCH_MAXAREAOFISLAND_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class MaxAreaOfIsland {
public:
	MaxAreaOfIsland();
	virtual ~MaxAreaOfIsland();
	int closedIsland(vector<vector<int>>& );
	void dfs(vector<vector<int>>& , vector<vector<int>>&  , int , int , int& );

};

#endif /* DEPTHFIRSTSEARCH_MAXAREAOFISLAND_H_ */
