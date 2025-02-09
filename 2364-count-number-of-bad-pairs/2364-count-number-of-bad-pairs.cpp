class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>rep;
        long long goodPairs=0;
        for(int i=0;i<nums.size();i++)
        {
            goodPairs+=rep[i-nums[i]];
            rep[i-nums[i]]++;
        }
        long long totalPairs=(nums.size()*(nums.size()-1))/2;
        long long ans= totalPairs-goodPairs;
        return ans;
        
    }
};