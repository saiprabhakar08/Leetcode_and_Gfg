class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        vector<unordered_set<string>>uniquee;
        for(auto it:responses)
        {
            unordered_set<string>temp;
            for(auto i:it)
            {
                temp.insert(i);
            }
            uniquee.push_back(temp);
        }
        unordered_map<string,int>rep;
        int maxi=0;
        for(auto it:uniquee)
        {
            for(auto i:it)
            {
                rep[i]++;
                if(rep[i]>maxi)
                {
                    maxi=rep[i];
                }
            }
        }
        vector<string>temp;
        for(auto it:rep)
        {
            if(it.second==maxi) temp.push_back(it.first);
        }
        sort(temp.begin(),temp.end());
        return temp[0];
        
    }
};