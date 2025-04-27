class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0,j=1,k=2,count=0;
        while(k<nums.size())
            {
                if((nums[i]+nums[k]) == nums[j]/2 and nums[j]==nums[j]/2 +nums[j]/2) count++;
                i++;
                j++;
                k++;
            }
        return count;
    }
};