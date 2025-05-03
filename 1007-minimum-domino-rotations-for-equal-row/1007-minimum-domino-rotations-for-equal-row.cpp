class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>rep;
        for(int i=0;i<tops.size();i++)
        {
            if(tops[i]!=bottoms[i])
            {
                rep[tops[i]]++;
                rep[bottoms[i]]++;
            }
            else
            {
                rep[tops[i]]++;
            }
        }
        int flag=0,eq;
        for(auto it:rep)
        {
            if(it.second==tops.size())
            {
                flag=1;
                eq=it.first;
                break;
            }
        }
        if(flag==0) return -1;
        int mini1=0,mini2=0;
        for(int i=0;i<tops.size();i++)
        {
           if(tops[i]!=eq) mini1++;
           if(bottoms[i]!=eq) mini2++;
        }
        return min(mini1,mini2);
        
    }
};