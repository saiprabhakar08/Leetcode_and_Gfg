class Solution {
public:
    string makeFancyString(string s) {
        int i=0,j=1;
        string res="";
        while(j<s.size())
        {
            if(s[i]!=s[j])
            {
                res+=s[i];
                i++;
                j++;
            }
            else if(s[i]==s[j])
            {
               res+=s[i];
               j++;
                while(s[i]==s[j] and j<s.size())
                {
                    j++;
                }
                i=j-1;
            }
        }  
        res+=s[i];  
        return res;    
    }
};