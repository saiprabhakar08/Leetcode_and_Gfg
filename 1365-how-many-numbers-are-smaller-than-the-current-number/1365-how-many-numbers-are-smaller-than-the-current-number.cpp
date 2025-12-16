class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        unordered_map<int,vector<int>>mpp;
        for(int i = 0 ; i < nums.size() ; i++) mpp[nums[i]].push_back(i);
        vector<int>ans(nums.size(),0);
        for(int i = 0 ; i < temp.size() ; i++)
        {
            for(int j = 0 ; j < mpp[temp[i]].size() ; j++)
            {
                ans[mpp[temp[i]][j]] = i;
            }
            i += (mpp[temp[i]].size() - 1);
        }
        return ans;

    }
};