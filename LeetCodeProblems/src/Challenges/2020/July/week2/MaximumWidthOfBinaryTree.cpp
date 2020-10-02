#include "MaximumWidthOfBinaryTree.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

MaximumWidthOfBinaryTree::MaximumWidthOfBinaryTree() {
	// TODO Auto-generated constructor stub

}

MaximumWidthOfBinaryTree::~MaximumWidthOfBinaryTree() {
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

int widthOfBinaryTree(TreeNode* root) {

    if(!root)
        return 0;

    queue<pair<TreeNode*, int>> levels;
    levels.push(make_pair(root, 1));
    int result = 1;

    while(!levels.empty()){
        int count = levels.size();
        int startNodeIndex = levels.front().second; // Left Node
        int endNodeIndex = levels.back().second;    // Right Node
        result = max(result, (endNodeIndex - startNodeIndex) + 1);

        for(int i = 0; i < count; i++){
            TreeNode* currentNode = levels.front().first;
            // OverTackle Over flow due to exponential growth
            int currentNodeIndex = levels.front().second - startNodeIndex;
            levels.pop();  // Queue pop from front
            if(currentNode->left)
                levels.push(make_pair(currentNode->left, 2 * currentNodeIndex));
            if(currentNode->right)
                levels.push(make_pair(currentNode->right, 2 * currentNodeIndex + 1));
        }

    }
   return result;
}
