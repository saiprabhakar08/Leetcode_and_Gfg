class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int j=0,i=0;
        while(i<s.size())
        {
            if(j<spaces.size() and i==spaces[j])
            {
                res+=' ';
                j++;
            }
            res+=s[i];
            i++;
        }
        return res;
    }
};