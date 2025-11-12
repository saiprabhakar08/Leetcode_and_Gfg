class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>freq;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            freq[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto it : freq)
        {
            if(it.second.size() >= 3)
            {
                int i = 0,j = 1,k = 2;
                while(k < it.second.size())
                {
                    int temp =  (it.second[j] - it.second[i]) + (it.second[k] - it.second[j]) + (it.second[k] - it.second[i]);
                    ans = min(temp,ans);
                    i++;
                    j++;
                    k++;
                }
            }
        }
        if(ans != INT_MAX) return ans;
        return -1;

        
    }
};