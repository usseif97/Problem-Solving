#include "AllElementsInTwoBinarySearchTrees.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

AllElementsInTwoBinarySearchTrees::AllElementsInTwoBinarySearchTrees() {
	// TODO Auto-generated constructor stub

}

AllElementsInTwoBinarySearchTrees::~AllElementsInTwoBinarySearchTrees() {
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


void inOrderTraverse(TreeNode* root, vector<int>& tree){
    if(root){
        inOrderTraverse(root->left, tree);
        tree.push_back(root->val);
        inOrderTraverse(root->right, tree);
    }
}

void mergeTwoSortedVectors(vector<int> vec1, vector<int> vec2, vector<int>& mergedVectors) {
    int i = 0, j = 0, k = 0;
    // Traverse both array
    while (i < vec1.size() && j < vec2.size()) {
        if (vec1[i] < vec2[j])
            mergedVectors[k++] = vec1[i++];
        else
            mergedVectors[k++] = vec2[j++];
    }

    while (i < vec1.size())
        mergedVectors[k++] = vec1[i++];

    while (j < vec2.size())
        mergedVectors[k++] = vec2[j++];
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

    vector<int> tree1, tree2;

    // Call by Reference
    inOrderTraverse(root1, tree1);
    inOrderTraverse(root2, tree2);

    vector<int> result(tree1.size() + tree2.size());

    mergeTwoSortedVectors(tree1, tree2, result);
    return result;


}

