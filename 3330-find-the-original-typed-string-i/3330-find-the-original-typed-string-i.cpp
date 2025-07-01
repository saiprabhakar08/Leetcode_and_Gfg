class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int>freq;
        freq[word[0]]++;
        for(int i = 1 ; i < word.size(); i++)
        {
            if(word[i] == word[i-1])
            {
                freq[word[i]]++;
            }
            else
            {
                if(!(freq[word[i]]))
                {
                    freq[word[i]] = 1;
                }
            }
        }
        int ans = 1;
        for(auto it : freq)
        {
            ans+=(it.second-1);
        }
        return ans;
        
    }
};