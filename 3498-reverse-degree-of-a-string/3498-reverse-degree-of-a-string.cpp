class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int temp=s[i];
            temp=abs(temp-123);
            ans+=((i+1)*temp);
        }
        return ans;
        
    }
};