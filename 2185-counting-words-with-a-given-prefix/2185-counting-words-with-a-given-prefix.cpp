class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            for(int j=0;j<pref.size();j++)
            {
                if(words[i][j]!=pref[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) count++;
        }
        return count;
        
    }
};