class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,j=1,temp=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>temp)
            {
                temp=nums[i];
                swap(nums[i],nums[j]);
                count++;
                j++;
            }
        }
        return count;
    }
};