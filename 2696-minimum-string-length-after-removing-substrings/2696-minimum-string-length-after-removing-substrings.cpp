class Solution {
public:
    int minLength(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++)
        {
            if(!(a.empty()))
            {
                if(a.top()=='A' and s[i]=='B') a.pop();
                else if(a.top()=='C' and s[i]=='D') a.pop();
                else a.push(s[i]);
            }
            else a.push(s[i]);
        }
        return a.size();
    }
};