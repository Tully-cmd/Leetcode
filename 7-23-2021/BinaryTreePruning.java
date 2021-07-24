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
class Solution {
    public TreeNode pruneTree(TreeNode root) {
        System.out.println(root.val);
        boolean children = false;
        if(hasLeft(root) == true) {
            TreeNode c1 = pruneTree(root.left);
            children = true;
            if(c1 == null) {
                root.left = null;
            }
        }
        if(hasRight(root) == true) {
            TreeNode c2 = pruneTree(root.right);
            children = true;
            if(c2 == null) {
                root.right = null;
            }
        }
        if(children == false && root.val == 0) {
            // root.val = -1;
            // return root;
            System.out.println("Got here");
            return null;
        }


        if(hasLeft(root) == false && hasRight(root) == false && root.val == 0) {
            //root.val = -1;
            return null;
        }
        return root;

        
    }
    public boolean hasLeft(TreeNode root) {
        if(root.left == null) {
            return false;
        } else {
            return true;
        }
    }
    public boolean hasRight(TreeNode root) {
        if(root.right == null) {
            return false;
        } else {
            return true;
        }
    }
}