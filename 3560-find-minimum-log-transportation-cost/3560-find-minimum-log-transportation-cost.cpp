class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost=0,nn=n,mm=m,kk=k;
        if(n>k)
        {
            cost+=(kk*(nn-kk));
        }
        if(m>k)
        {
            cost+=(kk*(mm-kk));
        }
        return cost;

        
    }
};