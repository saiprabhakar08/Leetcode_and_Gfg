class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>freq;
        for(auto it : friends)
        {
            freq[it]++;
        }
        vector<int>ans;
        for(auto it : order)
        {
            if(freq[it])
            {
                ans.push_back(it);
            }
        }
        return ans;
        
    }
};