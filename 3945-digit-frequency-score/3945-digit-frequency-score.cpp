class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mpp;
        while(n)
        {
            mpp[n % 10]++;
            n /= 10;
        }
        int ans = 0;
        for(auto it : mpp)
        {
            ans += it.first * it.second;
        }   
        return ans;
    }
};