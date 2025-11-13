class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(auto it : nums)
        {
            ans += (nums[nums.size() - 1] - it);
        }
        return ans;
        
    }
};