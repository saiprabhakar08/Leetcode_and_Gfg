class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto it : nums) freq[it]++;
        for(auto it : freq) if(it.second == (nums.size() / 2)) return it.first;
        return 0;
    }
};