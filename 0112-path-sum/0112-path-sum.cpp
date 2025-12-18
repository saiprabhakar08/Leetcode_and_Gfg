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
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        findSum(root,targetSum,0,ans);
        return ans;
    }
    void findSum(TreeNode* root,int targetSum,int sum,bool &ans)
    {
        if(root == NULL) return;
        if((root -> left == NULL) and (root -> right == NULL))
        {
            sum += root -> val;
            if(sum == targetSum) ans = true;
            return;
        }
        sum += root -> val;
        if(root -> left) findSum(root -> left,targetSum,sum,ans);
        if(root -> right) findSum(root -> right,targetSum,sum,ans);
        return;
    }
};