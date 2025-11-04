class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a=nums[0];
        nums.erase(nums.begin());
        sort(nums.begin(),nums.end());
        int b=a+(nums[0]+nums[1]);
        return b;
        
    }
};