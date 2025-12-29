class Solution {
public:
    int maxScore(string s) {
        int noOfOnes=0;
        for(auto it:s) if(it=='1') noOfOnes++;
        int i=0,j=s.size()-1,zcount=0,ans=0,ocount=0;
        while(i<j)
        {
            if(s[i]=='0') 
            {
                zcount++;
                ans=max(ans,(zcount+(noOfOnes-ocount)));
                // cout<<zcount+(noOfOnes-ocount)<<" ";
            }
            else
            {
                ocount++;
                ans=max(ans,(zcount+(noOfOnes-ocount)));
                // cout<<zcount+(noOfOnes-ocount)<<" ";
            }
            i++;
        }
        return ans;
        
    }
};