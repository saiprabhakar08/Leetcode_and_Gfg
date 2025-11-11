class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int totalSum = 0;
        for(auto it : nums) totalSum += it;
        sort(nums.begin(),nums.end());
        int curr = 0;
        vector<int>ans;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(curr > (totalSum - curr)) return ans;
            ans.push_back(nums[i]);
            curr += nums[i];
        }
        return ans;
        
    }
};