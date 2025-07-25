class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]<0) return nums[nums.size()-1];
        unordered_map<int,int>rep;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                {
                    rep[nums[i]]++;
                }
            }
        int sum=0;
        for(auto it:rep)
            {
                sum+=it.first;
            }
        return sum;
        
    }
};