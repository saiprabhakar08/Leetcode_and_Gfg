class Solution {
public:
    char findTheDifference(string s, string t) {
        char exor = 0;
        for(auto it : s) exor ^= it;
        for(auto it : t) exor ^= it;
        return exor;
        
    }
};