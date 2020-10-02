/*
 * PathSumIII.h
 *
 *  Created on: Aug 8, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_AUGUST_WEEK2_PATHSUMIII_H_
#define CHALLENGES_2020_AUGUST_WEEK2_PATHSUMIII_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class PathSumIII {
public:
	PathSumIII();
	virtual ~PathSumIII();
	 int pathSum(TreeNode* , int );
	 void dfs(TreeNode* , int , int &, int );
};

#endif /* CHALLENGES_2020_AUGUST_WEEK2_PATHSUMIII_H_ */
