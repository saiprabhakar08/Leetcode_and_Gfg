class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans(2,0);
        while(n)
        {
            if(n&1) ans[0]++;
            n>>=1;
            if(n&1) ans[1]++;
            n>>=1;
        }
        return ans;
        
    }
};