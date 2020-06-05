#include "CousinsInBinaryTree.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CousinsInBinaryTree::CousinsInBinaryTree() {
	// TODO Auto-generated constructor stub

}

CousinsInBinaryTree::~CousinsInBinaryTree() {
	// TODO Auto-generated destructor stub
}

vector<int> CousinsInBinaryTree::dfs (TreeNode* root, int target, int parent, int depth){
    if(root == NULL){
        return {};
    }
    if (root->val == target){
        return{depth, parent};
    } else {
        parent = root->val; // I move with the root
        vector<int> left = dfs(root->left, target, parent, depth+1);  // LeftSearch
        vector<int> right = dfs(root->right, target, parent, depth+1);// RightSearch
        //But only one must have the target Node
        if(left.empty()){
            return right;
        }else{
            return left;
        }
    }
}

bool CousinsInBinaryTree::isCousins(TreeNode* root, int x, int y) {
    vector<int> xDepthAndParent = dfs(root, x, -1, 0);
    vector<int> yDepthAndParent = dfs(root, y, -1, 0);

    if(xDepthAndParent[0] == yDepthAndParent[0] && xDepthAndParent[1] != yDepthAndParent[1]){
        return true;
    } else {
        return false;
    }
}

