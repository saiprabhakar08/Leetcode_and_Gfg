class Solution {
public:
    bool checkOnesSegment(string s) {
        int count = 0,ans = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '1') count++;
            else
            {
                if(count) ans++;
                count = 0;
            }
        }
        if(count) ans++;
        return ans == 1;
    }
};