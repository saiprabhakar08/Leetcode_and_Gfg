class Solution {
public:
    string clearDigits(string s) {
        stack<char>alpha;
        for(int i=0;i<s.size();i++)
        {
            int asciival=(int)s[i];
            if(asciival>=48 and asciival<=57)
            {
                if(!(alpha.empty()))
                {
                    alpha.pop();
                }
            }
            else
            {
                alpha.push(s[i]);
            }
        }
        string res="";
        while(!(alpha.empty()))
        {
            res+=alpha.top();
            alpha.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};