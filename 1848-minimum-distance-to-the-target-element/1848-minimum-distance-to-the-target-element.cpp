class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        unordered_map<int,int>temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target) temp[i]=nums[i];
        }
        int ans=INT_MAX;
        for(auto it:temp)
        {
            if((abs(it.first-start))<ans) ans=abs(it.first-start);
        }
        return ans;
        
    }
};