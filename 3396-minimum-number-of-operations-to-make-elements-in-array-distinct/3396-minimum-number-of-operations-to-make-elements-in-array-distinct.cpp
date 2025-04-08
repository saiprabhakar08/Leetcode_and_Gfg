class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>rep;
        for(auto it:nums) rep[it]++;
        int i=0,count=0;
        while(i<nums.size())
        {
            int flag=0;
            for(auto it:rep)
            {
                if(it.second>1) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return count;
            count++;
            if((i+3)<nums.size())
            {
            rep[nums[i++]]--;
            rep[nums[i++]]--;
            rep[nums[i++]]--;
            }
            else break;
        }
        return count;

    }
};