class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0,j=0;
        unordered_map<char,int>temp;
        for(int i=0;i<s.size();i++)
        {
            temp[s[i]]++;
            while(temp.size()==3)
            {
                ans+=(s.size()-i);
                temp[s[j]]--;
                if(temp[s[j]]==0) temp.erase(s[j]);
                j++;
            }
        }
        return ans;
    }
};