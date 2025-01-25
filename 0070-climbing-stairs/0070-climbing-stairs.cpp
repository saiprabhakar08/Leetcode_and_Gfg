class Solution {
public:
    int ans(int n,vector<int>&dp,int i)
    {
        if(i==0) return 1;
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i]=(ans(n,dp,i-1))+(ans(n,dp,i-2));
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return ans(n,dp,n);
        
    }
};