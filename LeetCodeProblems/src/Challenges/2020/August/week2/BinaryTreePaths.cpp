#include "BinaryTreePaths.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

BinaryTreePaths::BinaryTreePaths() {
	// TODO Auto-generated constructor stub

}

BinaryTreePaths::~BinaryTreePaths() {
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

vector<string>ans;

void findPaths(TreeNode* root,string temp){

	   // Leaf
       if(root->left==NULL && root->right==NULL){
           ans.push_back(temp + to_string(root->val));
           return;
       }

       // Internal
       if(root->left!=NULL && root->right!=NULL){
           findPaths(root->left, temp + to_string(root->val)+"->");
           findPaths(root->right, temp + to_string(root->val)+"->");
       }

       // Has One Child
       else{
           if(root->left!=NULL){
               findPaths(root->left, temp + to_string(root->val)+"->");
           }
           else{
               findPaths(root->right, temp + to_string(root->val)+"->");
           }
       }
   }

vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL){
           return {};
       }
       findPaths(root,"");
       return ans;
   }
