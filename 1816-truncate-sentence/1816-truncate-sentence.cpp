class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string a="",b="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' && count<k)  
            {
                b+=a;
                a="";
                count++;
            }
            a+=s[i]; 
        }
        if(count<k)
        {
            b+=a;
        }
        return b;
        
    }
};