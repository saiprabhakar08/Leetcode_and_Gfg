class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>alp;
        for(int i=0;i<s.size();i++)
        {
            if(!(alp.empty()))
            {
                if(alp.top()==s[i]) alp.pop();
                else alp.push(s[i]);
            }
            else alp.push(s[i]);
        }
        string ans="";
        while(!(alp.empty()))
        {
            ans=alp.top()+ans;
            alp.pop();
        }
        return ans;
        
    }
};