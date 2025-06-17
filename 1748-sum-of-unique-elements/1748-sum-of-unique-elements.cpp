class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        int s=0;
        for(auto it:a)
        {
            if(it.second==1)
            {
                s+=it.first;
            }
        }
        return s;
    }
};