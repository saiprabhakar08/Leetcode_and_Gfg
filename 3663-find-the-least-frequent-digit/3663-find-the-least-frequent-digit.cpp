class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>freq;
        while(n)
        {
            freq[n%10]++;
            n/=10;
        }
        int ans = 10,mini = INT_MAX;
        for(auto it : freq)
        {
            if(it.second < mini) 
            {
                mini = it.second;
                ans = it.first;
            }
            else if(it.second == mini)
            {
                ans = min(ans,it.first);
            }
        }
        return ans;
    }
};