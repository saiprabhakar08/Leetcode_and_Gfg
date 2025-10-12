class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>rep;
        for(auto it : nums) rep[it]++;
        int ans = 0;
        for(auto it : rep)
        {
            if((it.second % k) == 0)
            {
                ans += (it.first * it.second);
            }
        }
        return ans;
        
    }
};