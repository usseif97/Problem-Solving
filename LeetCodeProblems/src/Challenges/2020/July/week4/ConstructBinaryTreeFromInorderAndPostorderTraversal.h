/*
 * ConstructBinaryTreeFromInorderAndPostorderTraversal.h
 *
 *  Created on: Jul 28, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK4_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H_
#define CHALLENGES_2020_JULY_WEEK4_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class ConstructBinaryTreeFromInorderAndPostorderTraversal {
public:
	ConstructBinaryTreeFromInorderAndPostorderTraversal();
	virtual ~ConstructBinaryTreeFromInorderAndPostorderTraversal();
	TreeNode* buildTree(vector<int>& , vector<int>& );
	TreeNode* constructBST(vector<int>& , int , int ,
	                       vector<int>& , int , int );
};

#endif /* CHALLENGES_2020_JULY_WEEK4_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H_ */
