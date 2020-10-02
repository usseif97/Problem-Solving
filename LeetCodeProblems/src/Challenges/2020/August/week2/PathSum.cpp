#include "PathSum.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PathSum::PathSum() {
	// TODO Auto-generated constructor stub

}

PathSum::~PathSum() {
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


 bool hasPathSum(TreeNode* root, int sum) {
     if(!root)
          return 0;

     int paths = 0;
     //dfs(root, sum, paths, 0);

     if(paths > 0)
         return true;
     return false;
 }

  void dfs(TreeNode* root, int targetSum, int &paths, int currentSum){

      currentSum += root->val;
      if(currentSum == targetSum && root->left == NULL && root->right == NULL)
          paths++;

      if(root->left)
          dfs(root->left, targetSum, paths, currentSum);
      if(root->right)
          dfs(root->right, targetSum, paths, currentSum);

 }
