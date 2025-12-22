class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long>freqArr(26,0);
        for(int i = 0 ; i < s.size() ; i++) freqArr[s[i] - 'a'] += cost[i];
        sort(freqArr.begin(),freqArr.end());
        int count = 0;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(freqArr[i] != 0) count++;
        }
        long long ans = 0;
        int i = 0;
        while(count > 1)
        {
            ans += freqArr[i];
            if(freqArr[i] != 0) count--;
            i++;
        } 
        return ans;
        
    }
};