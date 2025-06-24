class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>ans;
        for(int i = 0 ;i < nums.size();i++)
        {
            if(nums[i] == key)
            {
                int l = i,j = i,temp = k;
                // cout<<i<<" ";
                ans.insert(i);
                j--;
                l++;
                while(temp)
                {
                    // cout<<j<<" ";
                    // cout<<l<<" ";
                    if(j>=0) ans.insert(j);
                    if(l<nums.size()) ans.insert(l);
                    j--;
                    l++;
                    temp--;
                }
            }
        }
        vector<int>originalAnswer;
        for(auto it:ans)
        {
            originalAnswer.push_back(it);
        }
        return originalAnswer;

        
    }
};