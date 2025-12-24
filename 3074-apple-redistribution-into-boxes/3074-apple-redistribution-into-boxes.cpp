class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for(auto it : apple) totalApples += it;
        sort(capacity.begin(),capacity.end(),greater<>());
        int ans = 0,i = 0;
        while(totalApples > 0)
        {
            totalApples -= capacity[i];
            i++;
            ans++;
        }
        return ans;
    }
};