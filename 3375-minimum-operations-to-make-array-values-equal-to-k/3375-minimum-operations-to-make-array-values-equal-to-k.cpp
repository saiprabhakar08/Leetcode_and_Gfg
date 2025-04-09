class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>rep;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>k)  rep[nums[i]]++;
            else if(nums[i]<k) return -1;
        }
        return rep.size();
        
    }
};