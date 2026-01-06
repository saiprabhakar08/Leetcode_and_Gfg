class Solution {
public:
    int minimumPushes(string word) {
        vector<int>rep(26,0);
        for(int i=0;i<word.size();i++)
        {
            rep[(word[i]-0)-97]++;
        }
        sort(rep.rbegin(),rep.rend());
        int k=0,count=0,j=1;
        for(int i=0;i<26;i++)
        {
            if(k==8)
            {
                k=0;
                j++;
            }
            count+=(j*rep[i]);
            k++;
        }
        return count;
        
    }
};