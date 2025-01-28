class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int count=0,i,j;
    for(i=0;i<nums.size();i++)
    {
        for(j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
           {
               count++;
               break;
               
           }
        }
        if(count==1)
        {
            break;
        }  
    }  
         return {i,j};      
    }
};