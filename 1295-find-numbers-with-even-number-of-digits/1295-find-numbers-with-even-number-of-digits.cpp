class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int count=0;
            while(temp)
            {
                count++;
                temp/=10;
            }
            if(!(count&1)) ans++;
        }
        return ans;
        
    }
};