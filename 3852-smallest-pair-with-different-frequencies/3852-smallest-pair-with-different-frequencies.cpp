class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        if(nums.size() < 2) return {-1,-1};
        vector<int>freq(101,-1);
        for(auto it : nums)
        {
            freq[it]++;
        }
        for(int i = 0 ; i < freq.size() ; i++)
        {
            if(freq[i] != -1)
            {
                for(int j = (i+1) ; j < freq.size() ; j++)
                {
                    if(freq[j] != -1 && freq[i] != freq[j]) return {i,j};
                }

            }
        }
        return {-1,-1};
    }
};