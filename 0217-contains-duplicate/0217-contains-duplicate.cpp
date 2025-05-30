class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
            if(a[nums[i]]>1)
            {
                return true;
            }
        }
        return false;
        
    }
};