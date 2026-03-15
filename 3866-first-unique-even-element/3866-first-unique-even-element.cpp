class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it : nums)
        {
            mpp[it]++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if((nums[i] & 1) == 0)
            {
                if(mpp[nums[i]] == 1) return nums[i];
            }
        }
        
        return -1;
        
    }
};