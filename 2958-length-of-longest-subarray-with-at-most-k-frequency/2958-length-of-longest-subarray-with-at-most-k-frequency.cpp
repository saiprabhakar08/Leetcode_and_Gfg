class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        int s=0,e=0,a=0;
        for(int i=0;i<n;i++)
        {
            f[nums[i]]++;
            while(s<i && f[nums[i]]>k)
            {
                f[nums[s]]--;
                if(f[nums[s]]==0)
                {
                    f.erase(nums[s]);
                }
                s++;
            }
            a=max(a,i-s+1);
        }
        return a;  
    }
};