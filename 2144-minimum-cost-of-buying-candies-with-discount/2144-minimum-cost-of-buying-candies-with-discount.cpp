class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int totalCost = 0;
        for(int i = 0 ; i < cost.size() ; i++) {
            totalCost += cost[i];
            cout<<cost[i]<<" ";
        }
        if(cost.size() < 3) return totalCost;
        int discount = 0,i = 0;
        if(cost.size() % 3 == 1) i = 1;
        else if(cost.size() % 3 == 2) i = 2;
        for(i; i < cost.size() ; i+=3 ) discount += cost[i];
        cout<<endl<<totalCost<<" "<<discount;
        return totalCost - discount;
    }
};