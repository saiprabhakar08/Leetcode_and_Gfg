class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = nums[0], maxi = nums[nums.size() - 1], i = 1;
        vector<int>ans;
        mini++;
        while(mini != maxi)
        {
            if(mini == nums[i]) i++;
            else ans.push_back(mini);
            mini++;
        }
        return ans;
    }
};