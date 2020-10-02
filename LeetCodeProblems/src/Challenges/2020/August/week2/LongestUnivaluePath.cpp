/*
 * LongestUnivaluePath.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: Usseif
 */

#include "LongestUnivaluePath.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

LongestUnivaluePath::LongestUnivaluePath() {
	// TODO Auto-generated constructor stub

}

LongestUnivaluePath::~LongestUnivaluePath() {
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

int ans;

int arrowLength(TreeNode* node) {
    if (node == NULL)
        return 0;
    int left = arrowLength(node->left);
    int right = arrowLength(node->right);
    int arrowLeft = 0, arrowRight = 0;

    if (node->left != NULL && node->left->val == node->val) {
        arrowLeft += left + 1;
    }
    if (node->right != NULL && node->right->val == node->val) {
        arrowRight += right + 1;
    }
    ans = max(ans, arrowLeft + arrowRight);
    return max(arrowLeft, arrowRight);
}

int longestUnivaluePath(TreeNode* root) {
    ans = 0;
    int x = arrowLength(root);
    return ans;
}


