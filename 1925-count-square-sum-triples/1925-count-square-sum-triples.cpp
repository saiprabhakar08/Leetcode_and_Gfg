class Solution {
public:
    int countTriples(int n) {
        if(n < 5) return 0;
        if(n < 10) return 2;
        if(n == 10) return 4;
        int ans = 4;
        for(int i = 11; i <= n ; i++)
        {
            for(int j = 1; j < i ; j++)
            {
                int temp = (i * i) - (j * j);
                int sq = sqrt(temp);
                if(temp == (sq * sq))
                {
                    if(sq < i) ans++;
                }
            }
        }
        return ans;
    }
};