/*
 * FloodFill.h
 *
 *  Created on: May 11, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_MAY_WEEK2_FLOODFILL_H_
#define CHALLENGES_MAY_WEEK2_FLOODFILL_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class FloodFill {
public:
	FloodFill();
	virtual ~FloodFill();
	vector<vector<int>> floodFill(vector<vector<int>>& , int , int , int );
	void dfs(vector<vector<int>>& , int , int , int , int );
};

#endif /* CHALLENGES_MAY_WEEK2_FLOODFILL_H_ */
