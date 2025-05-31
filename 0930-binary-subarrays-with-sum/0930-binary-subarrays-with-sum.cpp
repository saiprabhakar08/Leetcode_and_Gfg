class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0,sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==goal) count++;
            if(m[sum-goal]!=0) count+=m[sum-goal];
            if(m[sum]!=0) m[sum]+=1;
            else  m[sum]=1;
        }
        return count;
        
    }
};