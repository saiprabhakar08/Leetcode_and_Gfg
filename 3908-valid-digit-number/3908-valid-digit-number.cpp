class Solution {
public:
    bool validDigit(int n, int x) {
        bool flag = false;
        int count = 0,temp = n;
        while(n)
        {
            if((n % 10) == x) flag = true;
            count++;
            n /= 10;
        }
        int temp1 = pow(10,--count);
        if(flag)
        {
            if(temp / temp1 != x) return true;
        }
        return false;
    }
};