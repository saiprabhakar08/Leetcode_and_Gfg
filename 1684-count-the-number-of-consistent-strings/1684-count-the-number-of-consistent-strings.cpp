class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>found;
        for(auto it:allowed) found[it]++;
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            for(auto it:words[i])
            {
                if(!(found[it])) 
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