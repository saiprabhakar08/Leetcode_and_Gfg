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
    int findDepth(TreeNode* root)
    {
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL) return 1;
        int leftt=findDepth(root->left);
        int rightt=findDepth(root->right);
        return max(leftt,rightt)+1;
    }
    int maxDepth(TreeNode* root) {
        int ans=findDepth(root);
        return ans;
    }
};