class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>freq;
        int ans = 0;
        for(auto it : text)
        {
            if(it == ' ')
            {
                int i = 0,flag = 1;
                while(i < brokenLetters.size())
                {
                    if(freq[brokenLetters[i]])
                    {
                        flag = 0;
                        break;
                    }
                    i++;
                }
                if(flag == 1) ans++;
                freq.clear();
            }
            else
            {
                freq[it]++;
            }
        }
        int i = 0,flag = 1;
                while(i < brokenLetters.size())
                {
                    if(freq[brokenLetters[i]])
                    {
                        flag = 0;
                        break;
                    }
                    i++;
                }
                if(flag == 1) ans++;
        return ans;
        
    }
};