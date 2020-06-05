#include "InvertBST.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

InvertBST::InvertBST() {
	// TODO Auto-generated constructor stub

}

InvertBST::~InvertBST() {
	// TODO Auto-generated destructor stub
}

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root) {
	if (root == nullptr)
		return NULL;

	TreeNode* right = invertTree(root->right);
	TreeNode* left = invertTree(root->left);
	root->left = right;
    root->right = left;
    return root;
}


