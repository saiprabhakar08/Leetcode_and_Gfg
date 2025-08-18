class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size() - 1;
        double ans = 50.0;
        while(i<j)
        {
            double temp = (nums[i]+nums[j])/2.0;
            ans = min(ans,temp);
            i++;
            j--;
        }
        return ans;
        
    }
};