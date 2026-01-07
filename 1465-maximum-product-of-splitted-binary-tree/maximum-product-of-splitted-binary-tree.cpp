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
    long long total = 0;
    long long maxi = 0;
    const int MOD = 1e9 + 7;

    int totalsum(TreeNode* root){
        if(!root)   return 0;
        return root->val+totalsum(root->left)+totalsum(root->right);
    }

    long long dfs(TreeNode* root){
        if(!root)   return 0;

        long long left=dfs(root->left);
        long long right=dfs(root->right);

        long long currsum=root->val+left+right;

        maxi= max(maxi,currsum*(total-currsum));

        return currsum;
    }

    int maxProduct(TreeNode* root) {
        total=totalsum(root);
        dfs(root);
        return maxi%MOD;
    }
};