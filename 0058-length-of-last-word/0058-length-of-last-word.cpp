class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' and len==0) continue;
            if(s[i]==' ')
            {
                break;
            }
            else{len++;}
        }
        return len;
    }
};