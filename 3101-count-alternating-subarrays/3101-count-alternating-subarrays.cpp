class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long res=0;
        long long left=1;
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]!= nums[i-1])
            {
                left++;
            }
            else
            {
                res+=(left*(left+1))/2;
                left=1;
            }
        }
        res+=(left*(left+1))/2;
        return res;
        
    }
};