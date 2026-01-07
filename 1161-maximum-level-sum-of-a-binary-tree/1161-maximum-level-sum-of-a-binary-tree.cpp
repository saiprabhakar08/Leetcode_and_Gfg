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
    int maxLevelSum(TreeNode* root) {
        vector<TreeNode*>temp;
        temp.push_back(root);
        int level = 1,ans = 1,sum = INT_MIN;
        while(!(temp.empty()))
        {
            vector<TreeNode*>temp2;
            int curr = 0;
            for(int i = 0 ; i < temp.size() ; i++)
            {
                if(temp[i]->left) temp2.push_back(temp[i]->left);
                if(temp[i]->right) temp2.push_back(temp[i]->right);
                curr += temp[i]->val;
            }
            cout<<curr<<" "<<level<<endl;
            if(curr > sum)
            {
                ans = level;
                sum = curr;
            }
            level++;
            temp = temp2;
        }

        return ans;
    }
};