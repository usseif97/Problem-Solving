/*
 * CousinsInBinaryTree.h
 *
 *  Created on: May 7, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_MAY_WEEK1_COUSINSINBINARYTREE_H_
#define CHALLENGES_MAY_WEEK1_COUSINSINBINARYTREE_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class CousinsInBinaryTree {
public:
	//Definition for a binary tree node.
	struct TreeNode {
	    int val;
	    TreeNode *left;
	    TreeNode *right;
	    TreeNode() : val(0), left(nullptr), right(nullptr) {}
	    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	};

	CousinsInBinaryTree();
	virtual ~CousinsInBinaryTree();
	vector<int> dfs (TreeNode* , int , int , int );
	bool isCousins(TreeNode* , int , int );
};

#endif /* CHALLENGES_MAY_WEEK1_COUSINSINBINARYTREE_H_ */
