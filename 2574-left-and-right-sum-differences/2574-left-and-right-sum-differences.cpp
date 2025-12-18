class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        int sum = 0;
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            arr[i] = sum;
            sum += nums[i];
        }
        sum = 0;   
        for(int i = 0 ; i < nums.size() ; i++)
        {   
            arr[i] = abs(arr[i] - sum);
            sum += nums[i];
        }
        return arr;
    }
};