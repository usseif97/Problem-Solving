#include "ConstructBSTfromPreorderTraversal.h"

ConstructBST_fromPreorderTraversal::ConstructBST_fromPreorderTraversal() {
	// TODO Auto-generated constructor stub

}

ConstructBST_fromPreorderTraversal::~ConstructBST_fromPreorderTraversal() {
	// TODO Auto-generated destructor stub
}

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

 /*   private TreeNode insert(TreeNode root, int val) {
        if(root == null){
            return new TreeNode(val);
        } else if(root.val > val){
            root.left = insert(root.left, val);
        } else{
            root.right = insert(root.right, val);
        }
        return root;
    }

    public TreeNode bstFromPreorder(int[] preorder) {
        TreeNode root = null;
        for(int val : preorder){
            root = insert(root, val);
        }
        return root;

    }
    */
