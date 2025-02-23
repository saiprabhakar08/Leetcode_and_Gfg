class Solution {
public:
    bool hasSameDigits(string s) {
        string temp="";
        while(s.size()>2)
        {
            int i=0,j=1;
            while(j<s.size())
            {
                int temp1=s[i]-'0',temp2=s[j]-'0';
                temp+=(to_string(((temp1+temp2)%10)));
                i++;
                j++;
            }
            s=temp;
            temp="";
        }
        if(s[0]==s[1]) return true;
        else return false;
    }
};