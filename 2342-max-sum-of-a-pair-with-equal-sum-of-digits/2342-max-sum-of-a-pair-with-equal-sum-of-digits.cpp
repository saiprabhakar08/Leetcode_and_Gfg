class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<long long,vector<int>>rep;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            long long sum=0;
            while(temp)
            {
                sum+=temp%10;
                temp=temp/10;
            }
            rep[sum].push_back(nums[i]);
        }
        int maxi=-1;
        for(auto it:rep)
        {
            if(it.second.size()>1)
            {
                vector<int>temp1=it.second;
                sort(temp1.begin(),temp1.end());
                maxi=max(maxi,temp1[temp1.size()-1]+temp1[temp1.size()-2]);
            }
        }
        
        return maxi;
        
    }
};