class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>freq;
        for(auto it : nums) freq[it]++;
        while((freq.find(original) != freq.end())) original *= 2;
        return original;
        
    }
};