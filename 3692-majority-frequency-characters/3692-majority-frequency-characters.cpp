class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>freq;
        for(auto it : s) freq[it]++;
        unordered_map<int,vector<char>>grouping;
        for(auto it : freq) grouping[it.second].push_back(it.first);
        vector<char>ansVector;
        int size = 0,rep = 0;
        for(auto it : grouping)
        {
            if(it.second.size() > size)
            {
                ansVector = it.second;
                rep = it.first;
                size = it.second.size();
            }
            else if(it.second.size() == size)
            {
                if(it.first > rep)
                {
                    ansVector = it.second;
                    rep = it.first;
                    size = it.second.size();
                }
            }
        }
        string ans = "";
        for(auto it : ansVector) ans += it;
        return ans;
    }
};