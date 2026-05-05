class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3) return nums[0]*nums[1]*nums[2];
        sort(nums.begin(),nums.end());
        int c=0,c1=0,s=nums.size()-1;
         c=nums[0]*nums[1]*nums[s];
         c1=nums[s]*nums[s-1]*nums[s-2];
         return max(c,c1);

    }
};