class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int exor = 0;
        bool flag = true;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != 0) flag = false;
            exor ^= nums[i];
        }
        if(flag) return 0;
        if(exor == 0) return nums.size() - 1;
        return nums.size();
        
    }
};