/*
 * TwoSum3.h
 *
 *  Created on: Jul 9, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK2_TWOSUM3_H_
#define CHALLENGES_2020_JULY_WEEK2_TWOSUM3_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class TwoSum3 {
public:
	TwoSum3();
	virtual ~TwoSum3();
	bool findTarget(TreeNode* , int );
	void inOrderTraversal(TreeNode* , vector<int>& );
	bool twoSum(vector<int>& , int );
};

#endif /* CHALLENGES_2020_JULY_WEEK2_TWOSUM3_H_ */
