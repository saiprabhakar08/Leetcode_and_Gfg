class Solution {
public:
    int countVowelSubstrings(string word) {
        unordered_map<char,int>vcount;
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            for(int j=i;j<word.size();j++)
            {
                if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u')
                {
                    vcount[word[j]]++;
                }
                else break;
                if(vcount.size()==5) ans++;
            }
            vcount.clear();
        }
        return ans;
        
    }
};