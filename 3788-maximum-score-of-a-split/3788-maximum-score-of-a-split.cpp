class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        vector<int>miniValue(nums.size());
        int mini = nums[nums.size()-1];
        for(int i = nums.size() - 2 ; i >= 0 ; i--)
        {
            miniValue[i] = mini;
            mini = min(mini,nums[i]);
        }
        long long sum = 0,ans = INT_MIN;
        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            sum += nums[i];
            long long temp = sum - miniValue[i];
            ans = max(ans,temp);
        }
        return ans;
        
    }
};