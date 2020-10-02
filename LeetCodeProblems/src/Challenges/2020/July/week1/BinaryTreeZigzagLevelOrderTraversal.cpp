#include "BinaryTreeZigzagLevelOrderTraversal.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

BinaryTreeZigzagLevelOrderTraversal::BinaryTreeZigzagLevelOrderTraversal() {
	// TODO Auto-generated constructor stub

}

BinaryTreeZigzagLevelOrderTraversal::~BinaryTreeZigzagLevelOrderTraversal() {
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



vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

    if(root == NULL)
        return vector<vector<int>>();

    vector<vector<int>> result;
    queue<TreeNode*> queuee;

    // BST Line By Line
    queuee.push(root);
    while(!queuee.empty()){
        vector<int> level;
        int size = queuee.size();
        while(size-- > 0){
            TreeNode* currentNode = queuee.front();
            queuee.pop();
            level.push_back(currentNode->val);
            if(currentNode->left)
                queuee.push(currentNode->left);
            if(currentNode->right)
                queuee.push(currentNode->right);
        }
        result.push_back(level);
    }

    // Applay ZigZag on levels
    for(int i = 1; i < result.size(); i+=2){
        reverse(result[i].begin(), result[i].end());
    }

    return result;
}

