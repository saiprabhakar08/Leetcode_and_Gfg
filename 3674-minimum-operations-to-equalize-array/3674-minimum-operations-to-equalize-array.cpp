class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flag =1;
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] != nums[i+1])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1) return 0;
        return 1;
    }
};