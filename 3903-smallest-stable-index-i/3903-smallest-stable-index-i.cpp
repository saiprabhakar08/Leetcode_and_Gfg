class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxii(nums.size(),-1);
        int lar = nums[0];
        for(int i = 0 ; i < nums.size() ; i++)
        {
            lar = max(lar,nums[i]);
            maxii[i] = lar;
        }
        vector<int>minii(nums.size(),-1);
        int sma = nums[nums.size() - 1];
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            sma = min(sma,nums[i]);
            minii[i] = sma;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if((maxii[i] - minii[i]) <= k) return i;
        }
        return -1;
    }
};