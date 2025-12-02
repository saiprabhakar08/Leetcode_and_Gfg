class Solution {
    public int bitwiseComplement(int n) {
        int ans = 0,temp = 1;
        if(n == 0) return 1;
        while(n > 0)
        {
            if((n & 1) == 0)
            {
                ans += temp;
            }
            temp *= 2;
            n >>= 1;
        }
        return ans;
    }
}