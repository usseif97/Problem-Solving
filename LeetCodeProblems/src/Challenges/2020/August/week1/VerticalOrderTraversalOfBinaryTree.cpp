#include "VerticalOrderTraversalOfBinaryTree.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


VerticalOrderTraversalOfBinaryTree::VerticalOrderTraversalOfBinaryTree() {
	// TODO Auto-generated constructor stub

}

VerticalOrderTraversalOfBinaryTree::~VerticalOrderTraversalOfBinaryTree() {
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

void traverse(TreeNode* root, int level, int x, map<int,vector<pair<int, int>>>& levels){
    if(!root)
        return;

    levels[x].push_back(make_pair(level, root->val));

    if(root->left)
        traverse(root->left, level + 1, x - 1, levels);
    if(root->right)
        traverse(root->right, level + 1, x + 1, levels);
}

vector<vector<int>> verticalTraversal(TreeNode* root) {

    vector<vector<int>> result;
    map<int,vector<pair<int, int>>> levels;

    traverse(root, 0, 0, levels);

    for(auto column : levels){
        sort(column.second.begin(), column.second.end()); // Sort Vector according to first (Level)
        vector<int> temp;
        for(int i = 0; i < column.second.size(); i++)
            temp.push_back(column.second[i].second);
        result.push_back(temp);
    }
    return result;
}

