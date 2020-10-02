#include "PathSumII.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PathSumII::PathSumII() {
	// TODO Auto-generated constructor stub

}

PathSumII::~PathSumII() {
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

 vector<vector<int>> pathSum(TreeNode* root, int sum) {
     if(!root)
          return vector<vector<int>>();


     vector<vector<int>> paths;
     vector<int> path;

     //dfs(root, sum, 0, paths, path);

     return paths;

 }


 void dfs(TreeNode* root, int targetSum, int currentSum,
          vector<vector<int>> &paths, vector<int> &path){

      currentSum += root->val;
      path.push_back(root->val);
      if(currentSum == targetSum && root->left == NULL && root->right == NULL)
          paths.push_back(path);

      if(root->left)
          dfs(root->left, targetSum, currentSum, paths, path);
      if(root->right)
          dfs(root->right, targetSum, currentSum, paths, path);

      path.pop_back();
 }

