class Solution {
public:
    int residuePrefixes(string s) {
        unordered_map<char,int>mpp;
        int ans = 0,len = 1;
        for(auto it : s)
        {
            mpp[it]++;
            if((len % 3) == mpp.size()) ans++;
            len++;
        }
        return ans;
    }
};