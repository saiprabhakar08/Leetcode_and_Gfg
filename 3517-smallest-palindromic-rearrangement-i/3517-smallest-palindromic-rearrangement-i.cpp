class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char,int>temp;
        for(auto it:s) temp[it]++;
        string ans="";
        char temp2;
        for(int i=97;i<=122;i++)
        {
            char temp1=i;
            if(temp[temp1])
            {
                if(temp[temp1]%2)
                {
                    temp2=temp1;
                    // continue;
                }
                    int temp3=temp[temp1]/2;
                    int j=0;
                    while(j<temp3)
                    {
                        ans+=temp1;
                        j++;
                    }
            }
        }
        if(temp2!=NULL) ans+=temp2;
        for(int i=122;i>=97;i--)
        {
            char temp1=i;
            if(temp[temp1])
            {
                    int temp3=temp[temp1]/2;
                    int j=0;
                    while(j<temp3)
                    {
                        ans+=temp1;
                        j++;
                    }
            }
        }
        return ans;
        
    }
};