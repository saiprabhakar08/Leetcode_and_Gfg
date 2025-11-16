class Solution {
    public int numSub(String s) {
        int ans = 0;
        int mod = 1000000007;
        int temp = 0;
        for(char it : s.toCharArray())
        {
            if(it == '0') temp = 0;
            else
            {
                temp++;
                ans += temp;
                ans %= mod;
            }
        }
        return ans % mod;
    }
}