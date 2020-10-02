#include "SearchInBST.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SearchInBST::SearchInBST() {
	// TODO Auto-generated constructor stub

}

SearchInBST::~SearchInBST() {
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


TreeNode* searchBST(TreeNode* root, int val) {
     // Base Cases: root is null or key is present at root
    if (root == NULL)
       return NULL;

    if(root->val == val)
        return root;

    // Key is greater than root's key
    if (root->val < val)
        return searchBST(root->right, val);
    else
        return searchBST(root->left, val);
}
