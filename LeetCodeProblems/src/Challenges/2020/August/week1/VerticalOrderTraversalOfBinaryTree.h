/*
 * VerticalOrderTraversalOfBinaryTree.h
 *
 *  Created on: Aug 11, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_AUGUST_WEEK1_VERTICALORDERTRAVERSALOFBINARYTREE_H_
#define CHALLENGES_2020_AUGUST_WEEK1_VERTICALORDERTRAVERSALOFBINARYTREE_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class VerticalOrderTraversalOfBinaryTree {
public:
	VerticalOrderTraversalOfBinaryTree();
	virtual ~VerticalOrderTraversalOfBinaryTree();
	void traverse(TreeNode* , int , int , map<int,vector<pair<int, int>>>& );
	vector<vector<int>> verticalTraversal(TreeNode* );
};

#endif /* CHALLENGES_2020_AUGUST_WEEK1_VERTICALORDERTRAVERSALOFBINARYTREE_H_ */
