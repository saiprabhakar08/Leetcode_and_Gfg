class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int>b;
        for(int i=0;i<score.size();i++)
        {
            b[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        vector<string>a(score.size(),"0");
        for(int i=0;i<score.size();i++)
        {
            if(i==0) a[b[score[i]]]="Gold Medal";
            else if(i==1) a[b[score[i]]]="Silver Medal";
            else if(i==2) a[b[score[i]]]="Bronze Medal";
            else a[b[score[i]]]=to_string(i+1);
        }
        return a;
    }
};