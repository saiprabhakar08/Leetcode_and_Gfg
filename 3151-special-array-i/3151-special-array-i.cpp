class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return true;
        if(nums[0]&1) nums[0]=1;
        else nums[0]=0;
        for(int i=1;i<nums.size();i++)
        {
            cout<<(nums[i]&1);
            if((nums[i]&1) and nums[i-1]) return false;
            if((!(nums[i]&1)) and (!(nums[i-1]))) return false;
            if(nums[i]&1) nums[i]=1;
            else nums[i]=0;
        }
        return true;
    }
};