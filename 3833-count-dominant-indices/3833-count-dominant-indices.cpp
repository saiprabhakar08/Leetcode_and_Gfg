class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        vector<int>suffixSum(nums.size(),0);
        int sum = 0;
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            suffixSum[i] = sum;
            sum += nums[i];
        }
        int ans = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] > (suffixSum[i] / (nums.size() - i - 1))) ans++;
        }
        return ans;
    }
};