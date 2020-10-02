#include "BinaryTreeLevelOrderTraversal2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

BinaryTreeLevelOrderTraversal2::BinaryTreeLevelOrderTraversal2() {
	// TODO Auto-generated constructor stub

}

BinaryTreeLevelOrderTraversal2::~BinaryTreeLevelOrderTraversal2() {
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

vector<vector<int>> levelOrderBottom(TreeNode* root){

    if(root == NULL)
        return vector<vector<int>>();

    vector<vector<int>> result;
    queue<TreeNode*> queuee;

    // BST Line By Line
    queuee.push(root);
    while(!queuee.empty()){
        vector<int> level;
        int size = queuee.size();
        while(size-- > 0){
            TreeNode* currentNode = queuee.front();
            queuee.pop();
            level.push_back(currentNode->val);
            if(currentNode->left)
                queuee.push(currentNode->left);
            if(currentNode->right)
                queuee.push(currentNode->right);
        }
        result.push_back(level);
    }
    return result;

}

// JAVA Code

/*public List<List<Integer>> levelOrderBottom(TreeNode root) {
        if (root == null) return new ArrayList();
        List<List<Integer>> result = new ArrayList();
        Queue<TreeNode> queue = new LinkedList();

        queue.add(root);
        while (!queue.isEmpty()) {
            int size = queue.size();
            List<Integer> level = new ArrayList();
            while (size-- > 0) {
                root = queue.poll();
                level.add(root.val);
                if (root.left != null)
                    queue.add(root.left);
                if (root.right != null)
                    queue.add(root.right);
            }
            result.add(level);
        }

        Collections.reverse(result);
        return result;
}*/

