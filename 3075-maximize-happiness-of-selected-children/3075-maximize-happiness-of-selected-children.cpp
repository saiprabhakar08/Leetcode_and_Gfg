class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<>());
        long long decreaseHappiness = 0,i = 0,ans = 0;
        while(k--)
        {
            ans += (happiness[i] - decreaseHappiness);
            // cout<<ans<<" "<<decreaseHappiness<<endl;
            i++;
            decreaseHappiness++;
        }
        return ans;
    }
};