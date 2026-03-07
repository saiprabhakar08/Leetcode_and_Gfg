class Solution {
public:
    int secondHighest(string s) {
        unordered_map<int,int>mpp;
        int large = -1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            int temp = s[i] - '0';
            if(temp >= 0 && temp <= 9)
            {
                mpp[temp]++;
                large = max(large,temp);
            }
        }
        int ans = -1;
        for(auto it : mpp)
        {
            if(it.first < large && it.first > ans) ans = it.first;
        }
        return ans;
    }
};