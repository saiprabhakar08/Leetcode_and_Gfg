class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_map<string,int>rep;
        vector<string>ans;
        string segment="";
        for(int i = 0 ; i < s.size() ; i++)
        {
            segment += s[i];
            if(!(rep.find(segment)!=rep.end()))
            {
                ans.push_back(segment);
                rep[segment]++;
                segment="";
            }
            else
            {
                rep[segment]++;
            }
        }
        return ans;
    }
};