class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int longsum=nums[0],flag=0;
        unordered_map<int,int>rep;
        rep[nums[0]]++;
        for(int i=1;i<nums.size();i++)
        {
            rep[nums[i]]++;
            if((nums[i]==(nums[i-1]+1)) and (flag==0)) longsum+=nums[i];
            else flag=1;
        }
        while(rep[longsum])
        {
            longsum++;
        }
        return longsum;

        
    }
};