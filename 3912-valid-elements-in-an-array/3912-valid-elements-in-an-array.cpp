class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.size() <= 2) return nums;
        int maxi = nums[0];
        vector<int>leftt(nums.size(),-1);
        for(int i = 0 ; i < nums.size() ; i++)
        {
            leftt[i] = maxi;
            maxi = max(maxi,nums[i]);
        }
        maxi = nums[nums.size() - 1];
        vector<int>rightt(nums.size(),-1);
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            rightt[i] = maxi;
            maxi = max(maxi,nums[i]);
        }
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] > leftt[i] || nums[i] > rightt[i]) ans.push_back(nums[i]);
        }
        ans.push_back(nums[nums.size() - 1]);
        return ans;
        
    }
};