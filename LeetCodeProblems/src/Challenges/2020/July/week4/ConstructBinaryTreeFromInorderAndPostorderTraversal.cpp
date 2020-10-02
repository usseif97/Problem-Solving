#include "ConstructBinaryTreeFromInorderAndPostorderTraversal.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ConstructBinaryTreeFromInorderAndPostorderTraversal::ConstructBinaryTreeFromInorderAndPostorderTraversal() {
	// TODO Auto-generated constructor stub

}

ConstructBinaryTreeFromInorderAndPostorderTraversal::~ConstructBinaryTreeFromInorderAndPostorderTraversal() {
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
// Inorder Fallow --> Left_subtree => Root_Node => Right_subtree Traverse
// Postorder Fallow --> Left_subtree => Right_subtree =>Root_Nodetraverse


TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    //return constructBST(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
}

TreeNode* constructBST(vector<int>& inorder, int inStart, int inEnd,
                       vector<int>& postorder, int postStart, int postEnd){

    if(inStart > inEnd || postStart > postEnd)
        return NULL;

    TreeNode* root = new TreeNode(postorder[postEnd]);

    int i = inStart;
    while(root->val != inorder[i])
        i++;

    root->left = constructBST(inorder, inStart, i-1, postorder, postStart, postStart + i - inStart -1);
    root->right = constructBST(inorder, i+1, inEnd, postorder, postStart + i - inStart, postEnd - 1);

    return root;
}


