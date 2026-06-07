class Solution {
public:
    bool consecutiveSetBits(int n) {
        int ones = 0;
        int pairs = 0;
        while(n)
        {
            cout<<(n&1)<<" ";
            if(n & 1)
            {
                ++ones;
                if(ones == 3)return false; 
            }
            else
            {
                if(ones == 2)pairs++;
                ones = 0;
            }
            n >>= 1;
        }
        if(ones == 2) pairs++;
        if(ones > 2) return false;
        if(pairs == 1) return true;
        return false;
        
    }
};