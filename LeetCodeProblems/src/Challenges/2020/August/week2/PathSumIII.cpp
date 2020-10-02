#include "PathSumIII.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PathSumIII::PathSumIII() {
	// TODO Auto-generated constructor stub

}

PathSumIII::~PathSumIII() {
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

 int pathSum(TreeNode* root, int sum) {

     if(!root)
         return 0;

     int paths = 0;
     //start(root, sum, paths);
     return paths;

 }

 void start(TreeNode* root, int sum, int &paths){

     //dfs(root, sum, paths, 0);

     if(root->left)
         start(root->left, sum, paths);
     if(root->right)
         start(root->right, sum, paths);
 }

 void dfs(TreeNode* root, int targetSum, int &paths, int currentSum){

     currentSum += root->val;
     if(currentSum == targetSum)
         paths++;

     if(root->left)
         dfs(root->left, targetSum, paths, currentSum);
     if(root->right)
         dfs(root->right, targetSum, paths, currentSum);

 }

