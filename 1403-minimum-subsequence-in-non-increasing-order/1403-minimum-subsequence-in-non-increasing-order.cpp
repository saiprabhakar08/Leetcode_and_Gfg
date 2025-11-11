class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        sort(nums.begin(), nums.end(), greater<int>()); // descending

        vector<int> ans;
        long long takenSum = 0;
        for (int x : nums) {
            ans.push_back(x);
            takenSum += x;
            if (takenSum > total - takenSum) break;
        }
        // ans is already in non-increasing (descending) order
        return ans;
        
    }
};