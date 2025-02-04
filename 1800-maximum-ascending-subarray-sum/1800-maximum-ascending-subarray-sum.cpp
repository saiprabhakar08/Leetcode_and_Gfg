class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sub_sum = nums[0];
        int max_sub_sum = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) sub_sum+=nums[i+1];
            else{
                max_sub_sum = max(max_sub_sum,sub_sum);
                sub_sum = nums[i+1];
            }
        }
        max_sub_sum = max(max_sub_sum,sub_sum);
        return max_sub_sum;
    }
};