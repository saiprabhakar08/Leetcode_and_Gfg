class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sum1=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int temp=nums[i];
                while(temp)
                {
                    sum1+=temp%10;
                    temp/=10;
                }
        }
        return abs(sum-sum1);
        
    }
};