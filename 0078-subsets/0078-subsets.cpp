class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int flag =  1<<nums.size();
        vector<vector<int>>ans;
        for(int i = 0 ; i < flag ; i++)
        {
            int temp = i;
            int index = 0;
            vector<int>dum;
            while(temp)
            {
                if(temp&1)
                {
                    dum.push_back(nums[index]);
                }
                index++;
                temp>>=1;
            }
            ans.push_back(dum);
        }
        return ans;
        
    }
};