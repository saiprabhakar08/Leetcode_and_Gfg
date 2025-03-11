class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>rep;
       for(int i=0;i<nums.size();i++)
       {
        rep[nums[i]]++;
       }
       if(nums.size()==k)
       {
        int maxi=-1;
        for(auto it:rep)
        {
            if(it.first>maxi)
            {
                maxi=it.first;
            }
            
        }
        return maxi;
       }
       if(k==1)
       {
        int maxi=-1;
        for(auto it:rep)
        {
            if(it.first>maxi and it.second==1)
            {
                maxi=it.first;
            }
        }
        return maxi;
       }
       int res=-1;
       if(rep[nums[0]]==1)
       {
         res=nums[0];
       }
       if(rep[nums[nums.size()-1]]==1)
       {
        res=max(res,nums[nums.size()-1]);
       }
       return res;
    }
};