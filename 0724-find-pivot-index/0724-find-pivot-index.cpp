class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        int prevsum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(prevsum==(sum-prevsum-nums[i])) return i;
            prevsum+=nums[i];
        }
        return -1;
        
    }
};