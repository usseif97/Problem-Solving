/*
 * NumberOfIslands.h
 *
 *  Created on: May 12, 2020 (Medium)
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_NUMBEROFISLANDS_H_
#define DEPTHFIRSTSEARCH_NUMBEROFISLANDS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class NumberOfIslands {
public:
	NumberOfIslands();
	virtual ~NumberOfIslands();
	int numIslands(vector<vector<char>>& );
	void dfs(vector<vector<char>>& , vector<vector<int>>& , int , int );
};

#endif /* DEPTHFIRSTSEARCH_NUMBEROFISLANDS_H_ */
