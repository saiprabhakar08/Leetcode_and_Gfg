class Solution {
public:
    int totalMoney(int n) {
        if(n <= 7) return (n*(n+1))/2;
        else
        {
            int divi = n / 7;
            int findd = ((3+divi)*(3+divi+1)) / 2 - 6;
            int ans = 7 * findd;
            int add = ((divi + (n % 7)) * (divi + (n % 7) + 1)) / 2 - (divi * (divi + 1) / 2); 
            // while(temp)
            // {
            //     ans += divi;
            //     cout<<ans<<" ";
            //     divi++;
            //     temp--;
            // }
            return ans + add;
        }
    }
};