class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size() - 1;
        int lar = 0,sma = 0;
        while(i < nums.size() && j >= 0 && k)
        {
            lar += nums[j];
            sma += nums[i];
            i++;
            j--;
            k--;
        }
        return abs(lar - sma);
        
    }
};