class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if(s.size()<=1) return 0;
        else if(s.size()==2)
        {
            if(s=="ab") return x;
            else return y;
        }
        else
        {
        stack<char>a;
        int res=0;
        if(x>y)
        {
            for(int i=0;i<s.size();i++)
            {
                if((s[i]=='b') && (!(a.empty())) && (a.top()=='a'))
                {
                    a.pop();
                    res+=x;
                }
                else
                {
                    a.push(s[i]);
                }
            }
            string temp="";
            while(!(a.empty()))
            {
                temp+=a.top();
                a.pop();
            }
            reverse(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++)
            {
                if((temp[i]=='a') and (!(a.empty())) and (a.top()=='b'))
                {
                    a.pop();
                    res+=y;
                }
                else
                {
                    a.push(temp[i]);
                }

            }

        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if((s[i]=='a') and (!(a.empty())) and (a.top()=='b'))
                {
                    a.pop();
                    res+=y;
                }
                else
                {
                    a.push(s[i]);
                }
            }
            string temp="";
            while(!(a.empty()))
            {
                temp+=a.top();
                a.pop();
            }
            reverse(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++)
            {
                if((temp[i]=='b') and (!(a.empty())) and (a.top()=='a'))
                {
                    a.pop();
                    res+=x;
                }
                else
                {
                    a.push(temp[i]);
                }

            }

        }
        return res;
        }
        
    }
};