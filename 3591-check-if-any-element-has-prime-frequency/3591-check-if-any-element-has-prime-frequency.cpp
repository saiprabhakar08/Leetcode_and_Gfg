class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto it : nums)
        {
            freq[it]++;
        }
        for(auto it:freq)
        {
            bool flag = true;
            if(it.second == 1) 
            {
                flag = false;
                continue;
            }
            for(int i = 2 ; i <= (sqrt(it.second)) ; i++)
            {
                if((it.second % i) == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }
        return false;
    }
};