class Solution {
public:
    string reversePrefix(string s, int k) {
        string reverseString = "";
        for(int i = 0 ; i < k ; i++)
        {
            reverseString += s[i];
        }        
        reverse(reverseString.begin(),reverseString.end());
        for(int i = k ; i < s.size() ; i++)
        {
            reverseString += s[i];
        }
        return reverseString;
    }
};