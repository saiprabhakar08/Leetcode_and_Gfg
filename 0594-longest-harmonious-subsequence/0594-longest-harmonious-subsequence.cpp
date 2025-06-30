class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>freq;
        for(auto it:nums)
        {
            freq[it]++;
        }
        int prev = INT_MIN,prev1 = 0;
        int ans = 0;
        for(auto it:freq) 
        {
            if(prev == INT_MIN)
            {
                prev = it.first;
                prev1 = it.second;
            }
            else
            {
                if(it.first-prev == 1)
                {
                    if((prev1+it.second) > ans)
                    {
                        ans = prev1 + it.second;
                    }
                }
                prev = it.first;
                prev1 = it.second;
            }
        }
        return ans;
    }
};