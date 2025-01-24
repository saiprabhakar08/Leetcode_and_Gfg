class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini) mini=nums[i];
            if(nums[i]>maxi) maxi=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=mini and nums[i]!=maxi) return nums[i];
        }
        return -1;
        
    }
};