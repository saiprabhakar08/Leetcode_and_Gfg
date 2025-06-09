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
    int toCheckBalance(TreeNode* root,bool &ans)
    {
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL) return 1;
        int leftt=toCheckBalance(root->left,ans);
        int rightt=toCheckBalance(root->right,ans);
        if(leftt!=rightt)
        {
            if((abs(leftt-rightt))>1) ans=false;
            else ans=ans&&true;
        }
        else ans=ans&&true;
        return leftt+1;
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        toCheckBalance(root,ans);
        return ans;
        
    }
};