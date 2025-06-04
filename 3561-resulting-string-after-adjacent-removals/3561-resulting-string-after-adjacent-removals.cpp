class Solution {
public:
    string resultingString(string s) {
        stack<char>rep;
        for(int i=0;i<s.size();i++)
        {
            if(rep.empty()) rep.push(s[i]);
            else
            {
                int temp=rep.top();
                if(((s[i]-1)==temp) || ((s[i]+1)==temp)) rep.pop();
                else if(s[i]=='a' and rep.top()=='z') rep.pop();
                else if(s[i]=='z' and rep.top()=='a') rep.pop();
                else rep.push(s[i]);
            }
        }
        string ans="";
        while(!(rep.empty()))
        {
            ans+=rep.top();
            rep.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};