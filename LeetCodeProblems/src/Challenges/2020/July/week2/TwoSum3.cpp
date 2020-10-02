#include "TwoSum3.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

TwoSum3::TwoSum3() {
	// TODO Auto-generated constructor stub

}

TwoSum3::~TwoSum3() {
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


bool findTarget(TreeNode* root, int k) {
    vector<int> sortedArray;
    //inOrderTraversal(root, sortedArray);
    //return twoSum(sortedArray, k);

}


void inOrderTraversal(TreeNode* root, vector<int>& vec) {

    if(root == NULL)
        return;

    inOrderTraversal(root->left, vec);
    vec.push_back(root->val);
    inOrderTraversal(root->right, vec);

}

bool twoSum(vector<int>& numbers, int target){
    int l = 0, r = numbers.size() - 1;
    vector<int> solution;

    while(l < r){
        int sum = numbers[l] + numbers[r];
        if(sum == target)
           return true;
        if (sum < target)
            l++;
        else
            r--;

    }
    return false;
}
