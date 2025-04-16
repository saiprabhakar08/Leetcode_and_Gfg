class Solution {
public:
    void Combination(vector<int> &c,int index,int target,int n,vector<int>sum,vector<vector<int>>&ans,int s)
    {
        if(index>=n and s!=target)
        {
            return;
        }
        else if(s==target)
        {
            ans.push_back(sum);
            return;
        }
        else if(s>target)
        {
            return;
        }
        sum.push_back(c[index]);
        Combination(c,index,target,n,sum,ans,s+c[index]);
        sum.pop_back();
        Combination(c,index+1,target,n,sum,ans,s);
        //return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
       Combination(candidates,0,target,candidates.size(),{},ans,0);
       return ans;
    }
};