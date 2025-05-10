class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v,c;
        for(auto it:s)
        {
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u') v[it]++;
            else c[it]++;
        }
        int ans=0;
        int maxi=0;
        for(auto it:v) if(it.second>maxi) maxi=it.second;
        ans+=maxi;
        maxi=0;
        for(auto it:c) if(it.second>maxi) maxi=it.second;
        ans+=maxi;
        return ans;
        
    }
};