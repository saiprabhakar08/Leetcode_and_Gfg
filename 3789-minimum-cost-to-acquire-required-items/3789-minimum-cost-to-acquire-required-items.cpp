class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long mini = min(need1,need2);
        long long combi = cost1 + cost2;
        long long ans;
        if(costBoth < combi) ans = costBoth * mini;
        else ans = combi * mini;
        if(need1 < need2)
        {
            need2 -= need1;
            if(cost2 < costBoth) ans += (need2 * (long long)cost2);
            else ans += (need2 * (long long)costBoth);
        }
        else
        {
            need1 -= need2;
            if(cost1 < costBoth) ans += (need1 * (long long)cost1);
            else ans += (need1 * (long long)costBoth);
        }
        return ans;
    }
};