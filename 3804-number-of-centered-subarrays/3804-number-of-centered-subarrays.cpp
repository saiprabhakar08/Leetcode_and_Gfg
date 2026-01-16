class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int ans = nums.size();
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int sum = nums[i];
            unordered_map<int,int>mpp;
            mpp[sum]++;
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                sum += nums[j];
                mpp[nums[j]]++;
                if(mpp[sum]) ans++;
            }
        }
        return ans;
    }
};