class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        unordered_map<char,int>temp;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                temp[s[j]]++;
                if(temp.size()==3)
                {
                    ans+=(s.size()-j);
                    break;
                }
            }
            temp.clear();
        }
        return ans;
    }
};