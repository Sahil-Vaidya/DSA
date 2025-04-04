/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if (root == NULL) return root;

        // Find height of left and right subtrees
        int left = height(root->left);
        int right = height(root->right);

        if (left == right) return root;   // If both sides are equale this is LCA
        else if (left > right) return lcaDeepestLeaves(root->left);
        else return lcaDeepestLeaves(root->right); 
    }
};