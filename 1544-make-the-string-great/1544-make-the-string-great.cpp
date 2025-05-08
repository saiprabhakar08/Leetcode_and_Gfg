class Solution {
public:
    string makeGood(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++)
        {
            if(!a.empty())
            {
               // cout<<int(s[i])+32<<"  "<<int(a.top())<<endl;
                //cout<<int(s[i])-32<<"  "<<int(a.top())<<endl;
                if(((int(s[i])+32)==(int(a.top()))) or ((int(s[i])-32)==(int(a.top()))))
                {
                    a.pop();
                }
                else
                {
                    a.push(s[i]);
                }
            }
            else
            {
                a.push(s[i]);
            }
        }
        string b="";
        while(!a.empty())
        {
            b+=a.top();
            a.pop();
        }
        reverse(b.begin(),b.end());
        return b;
        
    }
};