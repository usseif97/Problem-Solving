#include "SameTree.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SameTree::SameTree() {
	// TODO Auto-generated constructor stub

}

SameTree::~SameTree() {
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


bool isSameTree(TreeNode* p, TreeNode* q) {

    if (p == NULL && q == NULL)
        return true;

    if (p == NULL || q == NULL)
        return false;

    if(p->val != q->val)
        return false;

    queue<TreeNode*> levelsA;
    queue<TreeNode*> levelsB;
    levelsA.push(p);
    levelsB.push(q);

    while((!levelsA.empty()) && (!levelsB.empty())){
        int countA = levelsA.size();
        int countB = levelsB.size();

        if(countA != countB)
            return false;


        for(int i = 0; i < countA; i++){
            TreeNode* currentNodeA = levelsA.front();
            TreeNode* currentNodeB = levelsB.front();
            levelsA.pop();  // Queue pop from front
            levelsB.pop();  // Queue pop from front

            // LEFT
            if(currentNodeA->left && currentNodeB->left){ // Both Not Equal Null,then check if both have the same value
                if(currentNodeA->left->val == currentNodeB->left->val){
                    levelsA.push(currentNodeA->left);
                    levelsB.push(currentNodeB->left);
                } else {
                    return false;
                }
            } else if (currentNodeA->left == NULL && currentNodeB->left == NULL) {
                // Do Nothing
            } else if(currentNodeA->left == NULL || currentNodeB->left == NULL){
                return false;
            }

            // RIGHT
            if(currentNodeA->right && currentNodeB->right){// Both Not Equal Null,then check if both have the same value
                if(currentNodeA->right->val == currentNodeB->right->val){
                    levelsA.push(currentNodeA->right);
                    levelsB.push(currentNodeB->right);
                } else {
                    return false;
                }
            } else if (currentNodeA->right == NULL && currentNodeB->right == NULL) {
                // Do Nothing
            } else if(currentNodeA->right == NULL || currentNodeB->right == NULL){
                return false;
            }

        }

    }
    return true;
}
