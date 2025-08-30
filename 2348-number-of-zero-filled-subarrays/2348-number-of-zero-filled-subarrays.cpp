class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long sum = 0;
        for(auto it : nums)
        {
            if(it == 0)
            {
                if(sum == 0)
                {
                    sum = 1;
                    ans += sum;
                }
                else
                {
                    ans+=(++sum);
                }
            }
            else
            {
                sum = 0;
            }
        }
        return ans;
        
    }
};