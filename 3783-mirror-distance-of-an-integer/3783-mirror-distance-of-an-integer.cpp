class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n,reverse = 0;
        while(temp)
        {
            reverse = reverse * 10 + (temp % 10);
            temp /= 10;
        }
        return abs(n - reverse);
        
    }
};