class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=1,d=0,temp;
        while(j<nums.size())
        {
            temp=nums[j]-nums[i];
            cout<<temp;
            if(temp>d)
            {
                d=temp;
            }
            i++;
            j++;
        }
        return d;
    }
};