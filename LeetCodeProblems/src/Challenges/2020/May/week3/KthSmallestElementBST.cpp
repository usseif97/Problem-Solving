/*
 * KthSmallestElementBST.cpp
 *
 *  Created on: May 20, 2020
 *      Author: Usseif
 */

#include "KthSmallestElementBST.h"

KthSmallestElementBST::KthSmallestElementBST() {
	// TODO Auto-generated constructor stub

}

KthSmallestElementBST::~KthSmallestElementBST() {
	// TODO Auto-generated destructor stub
}


// JAVA Code

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
/*class Solution {
       // InOrder Traverse
       public ArrayList<Integer> inorder(TreeNode root, ArrayList<Integer> arr) {
        if (root == null) return arr;
            inorder(root.left, arr);
            arr.add(root.val);
            inorder(root.right, arr);
            return arr;
        }

        public int kthSmallest(TreeNode root, int k) {
            ArrayList<Integer> nodes = inorder(root, new ArrayList<Integer>());
            return nodes.get(k - 1);

        }
}*/
