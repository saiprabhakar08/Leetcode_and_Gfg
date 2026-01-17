class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
        int s=nums.size();
        for(int i=1;i<=s;i++)
        {
           res=res^i;
        //    cout<<res<<" ";
        }
        for(int i=0;i<s;i++)
        {
            res=res^nums[i];
        }
        return res;
    }
};