class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(auto it : nums) freq[it]++;
        for(auto it : freq) if(it.second == 2) ans.push_back(it.first);
        return ans;
        
    }
};