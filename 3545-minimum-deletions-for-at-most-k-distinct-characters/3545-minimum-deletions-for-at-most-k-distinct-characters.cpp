class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>rep;
        for(auto it:s) rep[it]++;
        int ans=0;
        while(rep.size()>k)
        {
            int mini=INT_MAX;
            char alp;
            for(auto it:rep)
            {
                if(it.second<mini)
                {
                    mini=it.second;
                    alp=it.first;
                }
            }
            ans+=rep[alp];
            rep.erase(alp);
        }
        return ans;
    }
};