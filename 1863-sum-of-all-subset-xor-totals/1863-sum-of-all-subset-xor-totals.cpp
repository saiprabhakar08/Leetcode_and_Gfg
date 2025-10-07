class Solution {
public:
    void subset(vector<int>nums,int i,int exor,int &ans)
    {
        if(i == nums.size()) 
        {
            ans += exor;
            return;
        }
        subset(nums,i+1,exor^nums[i],ans);
        subset(nums,i+1,exor,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        subset(nums,0,0,ans);
        return ans;
    }
};