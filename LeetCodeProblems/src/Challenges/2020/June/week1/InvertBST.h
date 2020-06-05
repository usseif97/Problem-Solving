/*
 * InvertBST.h
 *
 *  Created on: Jun 3, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_JUNE_WEEK1_INVERTBST_H_
#define CHALLENGES_JUNE_WEEK1_INVERTBST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class InvertBST {
public:

	 // Definition for a binary tree node.
	 struct TreeNode {
	     int val;
	     TreeNode *left;
	     TreeNode *right;
	     TreeNode() : val(0), left(nullptr), right(nullptr) {}
	     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	 };

	InvertBST();
	virtual ~InvertBST();
	TreeNode* invertTree(TreeNode* );
};

#endif /* CHALLENGES_JUNE_WEEK1_INVERTBST_H_ */
