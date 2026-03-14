class Solution {
public:
    string reversePrefix(string word, char ch) {
        string a="";
        int i,flag=0;
        for(i=0;i<word.size();i++)
        {
            a=word[i]+a;
            if(word[i]==ch)
            {
                flag=1;
                i++;
                break;
            }
        }
        if(flag==1)
        {
        while(i<word.size())
        {
            a+=word[i];
            i++;
        }
        return a;
        }
        else
        {
            return word;
        }
        
    }
};