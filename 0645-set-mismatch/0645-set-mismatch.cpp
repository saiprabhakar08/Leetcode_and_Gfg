class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // int exor = 0;
        // for(auto it : nums) exor ^= it;
        // cout<<exor<<" ";
        // for(int i = 1 ; i <= nums.size() ; i++) exor ^= i;
        // cout<<exor<<" ";
        // return {};
        vector<int>freqArr(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++) freqArr[nums[i] - 1]++;
        vector<int>ans(2,0);
        for(int i = 0 ; i < freqArr.size() ; i++)
        {
            if(freqArr[i] == 2) ans[0] = i + 1;
            if(freqArr[i] == 0) ans[1] = i + 1;
        }
        return ans;

    }
};