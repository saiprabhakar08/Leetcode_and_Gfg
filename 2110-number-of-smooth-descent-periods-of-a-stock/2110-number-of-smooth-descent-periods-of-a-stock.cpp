class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = prices.size();
        int i = 0,con = 0;
        while(i < (prices.size() - 1))
        {
            if(prices[i] == (prices[i+1]+1))
            {
                con++;
                ans += con;
            }
            else con = 0;
            i++;
        }
        return ans;

    }
};