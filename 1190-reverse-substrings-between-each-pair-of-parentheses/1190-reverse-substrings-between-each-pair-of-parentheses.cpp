class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>a;
        string temp="",res="";
        int open=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {
                while((a.top())!='(')
                {
                    temp+=a.top();
                    a.pop();
                }
                open--;
                a.pop();
                if(open>0)
                {
                for(int j=0;j<temp.size();j++)
                {
                    a.push(temp[j]);
                }
                temp="";
                }
                else
                {
                    // reverse(temp.begin(),temp.end());
                    res+=temp;
                    temp="";
                }
            }
            else if(s[i]=='(')
            {
                a.push(s[i]);
                open++;
            }
            else 
            {
                if(open>0)
                {
                    a.push(s[i]);
                }
                else {
                    while(!(a.empty()))
                    {
                        temp+=a.top();
                        a.pop();
                    }
                    res+=s[i];
                }
            }         
        }
        return res;
    }
};