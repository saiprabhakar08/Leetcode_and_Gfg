class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int flag = 0;
        long long sum = 0;
        for(auto it : nums)
        {
            if(it == 0)
            {
                if(flag == 0)
                {
                    flag = 1;
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
                flag = 0;
            }
        }
        return ans;
        
    }
};