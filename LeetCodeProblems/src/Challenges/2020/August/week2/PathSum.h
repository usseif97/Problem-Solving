/*
 * PathSum.h
 *
 *  Created on: Aug 8, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_AUGUST_WEEK2_PATHSUM_H_
#define CHALLENGES_2020_AUGUST_WEEK2_PATHSUM_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class PathSum {
public:
	PathSum();
	virtual ~PathSum();
	 bool hasPathSum(TreeNode* root, int sum);
	  void dfs(TreeNode* , int , int &, int );
};

#endif /* CHALLENGES_2020_AUGUST_WEEK2_PATHSUM_H_ */
