class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 1;
        while(1)
        {
            int find = k * i;
            bool flag = true;
            int low = 0,high = nums.size() - 1;
            while(low <= high)
            {
                int mid = (low + high) / 2;
                if(nums[mid] == find)
                {
                    flag = false;
                    break;
                }
                else if(nums[mid] > find) high = mid - 1;
                else low = mid + 1;
            }
            if(flag) return find;
            i++;
        }

        
    }
};