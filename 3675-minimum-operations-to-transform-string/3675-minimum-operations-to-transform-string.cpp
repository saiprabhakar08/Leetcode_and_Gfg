class Solution {
public:
    int minOperations(string s) {
        unordered_map<char,int>freq;
        for(auto it : s)
        {
            freq[it]++;
        }
        if(freq.size() == 1 && freq['a']) return 0;
        int ans = 122;
        for(auto it : freq)
        {
            if(it.first != 'a')
            {
                // cout<<(int)it.first<<" ";
                ans = min(ans,(int)it.first);
            }
        }
        return 'z' - ans + 1;
    }
};