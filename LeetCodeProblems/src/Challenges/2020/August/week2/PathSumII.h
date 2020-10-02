/*
 * PathSumII.h
 *
 *  Created on: Aug 8, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_AUGUST_WEEK2_PATHSUMII_H_
#define CHALLENGES_2020_AUGUST_WEEK2_PATHSUMII_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class PathSumII {
public:
	PathSumII();
	virtual ~PathSumII();
	 vector<vector<int>> pathSum(TreeNode* , int );
	 void dfs(TreeNode* , int , int ,
	          vector<vector<int>> &, vector<int> &);
};

#endif /* CHALLENGES_2020_AUGUST_WEEK2_PATHSUMII_H_ */
