class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>rep;
        for(int i=0;i<nums.size();i++)
        {
            rep[nums[i]]++;
        }
        int ans=0;
        for(auto it:rep)
        {
            ans+=((it.second+1)/2);
        }
        if(ans==(nums.size()/2)) return true;
        else return false;
        
    }
};