class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int flag = 0;
        bool direction = true;
        if(nums[0] > nums[1]) return false;
        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            if(nums[i] > nums[i + 1] && direction == false)
            {
                if(flag == 0 || flag == 2) return false;
                flag++;
                direction = true;
            }
            else if(nums[i] < nums[i + 1] && direction == true)
            {
                // if(flag == 1) return false;
                flag++;
                direction = false;
            }
            else if(nums[i] == nums[i + 1]) return false;
        }
        if(flag == 3) return true;
        return false;
    }
};