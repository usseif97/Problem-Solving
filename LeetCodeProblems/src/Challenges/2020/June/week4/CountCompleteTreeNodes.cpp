#include "CountCompleteTreeNodes.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CountCompleteTreeNodes::CountCompleteTreeNodes() {
	// TODO Auto-generated constructor stub

}

CountCompleteTreeNodes::~CountCompleteTreeNodes() {
	// TODO Auto-generated destructor stub
}


//Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


int countNodes(TreeNode* root) {
    return root == nullptr ? 0 : 1 + countNodes(root->left) + countNodes(root->right);

}
