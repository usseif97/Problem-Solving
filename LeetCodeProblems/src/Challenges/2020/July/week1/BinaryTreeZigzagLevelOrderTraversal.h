/*
 * BinaryTreeZigzagLevelOrderTraversal.h
 *
 *  Created on: Jul 23, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK1_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H_
#define CHALLENGES_2020_JULY_WEEK1_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class BinaryTreeZigzagLevelOrderTraversal {
public:
	BinaryTreeZigzagLevelOrderTraversal();
	virtual ~BinaryTreeZigzagLevelOrderTraversal();
	vector<vector<int>> zigzagLevelOrder(TreeNode* );
};

#endif /* CHALLENGES_2020_JULY_WEEK1_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H_ */
