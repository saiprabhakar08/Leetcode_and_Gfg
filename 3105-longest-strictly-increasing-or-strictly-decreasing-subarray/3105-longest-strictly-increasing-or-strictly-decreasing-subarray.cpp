class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1,dec=1,minc=1,mdec=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1]) 
            {
                inc++;
                mdec=max(dec,mdec);
                dec=1;
            }
            else if(nums[i]<nums[i-1])
            {
                dec++;
                minc=max(inc,minc);
                inc=1;
            }
            else
            {
                mdec=max(dec,mdec);
                minc=max(inc,minc);
                dec=1;
                inc=1;
            }
        }
        mdec=max(dec,mdec);
        minc=max(inc,minc);
        return max(minc,mdec);
        
    }
};