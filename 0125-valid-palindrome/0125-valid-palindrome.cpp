class Solution {
public:
    bool isPalindrome(string s) {
        string trimmedS = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isalnum(s[i])) trimmedS += tolower(s[i]);
        }
        int i = 0,j = trimmedS.size() - 1;
        while(i < j)
        {
            if(trimmedS[i] != trimmedS[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};