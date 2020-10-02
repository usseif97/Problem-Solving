/*
 * IslandPerimeter.h
 *
 *  Created on: Jul 7, 2020
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_ISLANDPERIMETER_H_
#define DEPTHFIRSTSEARCH_ISLANDPERIMETER_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class IslandPerimeter {
public:
	IslandPerimeter();
	virtual ~IslandPerimeter();
	int islandPerimeter(vector<vector<int>>& );
	int cellPerimeter(int , int , vector<vector<int>>& , int , int );
};

#endif /* DEPTHFIRSTSEARCH_ISLANDPERIMETER_H_ */
