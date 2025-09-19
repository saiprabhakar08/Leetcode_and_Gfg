class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        map<int,int,greater<int>>freq;
        vector<int>ans;
        for(auto it : nums)
        {
            freq[it]++;
        }
        for(auto it:freq)
        {
            ans.push_back(it.first);
            k -= 1;
            if(k == 0) return ans;
        }
        return ans;
    }
};