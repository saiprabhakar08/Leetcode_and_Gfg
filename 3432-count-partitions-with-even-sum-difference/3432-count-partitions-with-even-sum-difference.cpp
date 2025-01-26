class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(auto it:nums) sum+=it;
        int sum2=0,count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            sum2+=nums[i];
            // cout<<sum-(sum-sum2)<<" ";
            if(((sum-sum2)-sum2)%2==0) count++;
        }
        return count;
    }
};