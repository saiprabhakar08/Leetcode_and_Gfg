class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(auto it : nums)
        {
            int count = 2,temp = it + 1;
            for(int i = 2 ; i <= (it / 2) ; i++)
            {
                if((it % i) == 0)
                {
                    temp += i;
                    count++;
                }
                if(count > 4) break;
            }
            if(count == 4) ans += temp;
        }
        return ans;
    }
};