class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>rep1,rep2;
        for(auto it : s) rep1[it]++;
        for(auto it : t) rep2[it]++;
        if(rep1.size() != rep2.size()) return false;
        for(auto it : rep1) if(rep2[it.first] != it.second) return false;
        return true;
        
    }
};