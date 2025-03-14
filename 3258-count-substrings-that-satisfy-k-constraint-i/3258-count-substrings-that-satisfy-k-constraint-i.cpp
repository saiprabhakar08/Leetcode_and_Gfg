class Solution {
public:
    int countKConstraintSubstrings(string s, int z) {
        int ans=0;
        for(int k=1;k<=s.size();k++)
        {
            for(int i=0;i<=s.size()-k;i++)
            {
                int ones=0,zeroes=0,l=i+k-1;
                for(int j=i;j<=l;j++)
                {
                    // cout<<s[j];
                    if(s[j]=='0') zeroes++;
                    if(s[j]=='1') ones++;
                    if(zeroes>z and ones>z) break;
                }
                // cout<<endl;
                if((zeroes<=z) or (ones<=z)) ans++;
            }
        }
        return ans;
    }
};