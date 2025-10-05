class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int i = 0,sum = 0;
        while(i < nums.size())
        {
            sum += nums[i];
            i++;
            if(i < nums.size())
            {
                sum -= nums[i];
                i++;
            }
        }
        return sum;
    }
};