class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char,int>freq;
        for(auto it : s1) freq[it]++;
        int c=0;
        for(int i=0;i<s1.size();i++){
            if(freq[s2[i]]==0) return false;
            freq[s2[i]]--; 
            if(s1[i]!=s2[i]) c++;
        }
        if(c==0 || c==2) return true;
        else return false;
    }
};