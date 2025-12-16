class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>freqArr(nums.size(),0);
        for(auto it : nums) freqArr[it - 1]++;
        vector<int>ans;
        for(int i = 0 ; i < freqArr.size() ; i++) if(freqArr[i] == 0) ans.push_back(i+1);
        return ans;
    }
};