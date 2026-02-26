class Solution {
public:
    bool isValid(string s) {
        stack<int> a;
        int i=0,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='}' or s[i]==']' or s[i]==')')
            {
                if(!a.empty())
                {
                    if(s[i]==')' and a.top()=='(')
                    {
                        a.pop();
                    }
                    else if(s[i]==']' and a.top()=='[')
                    {
                        a.pop();
                    }
                    else if(s[i]=='}' and a.top()=='{')
                    {
                        a.pop();
                    }
                    else
                    {
                        c++;
                        break;

                    }
                }
                else
                {
                    c++;
                    break;
                }
            }
            else
            {
                a.push(s[i]);
            }
        }
        if(c==1 || !a.empty())
        {
            return false;
        }
        else
        {
            return true;
        }

    }
};