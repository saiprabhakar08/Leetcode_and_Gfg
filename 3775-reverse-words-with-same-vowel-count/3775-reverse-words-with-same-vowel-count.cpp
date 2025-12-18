class Solution {
public:
    string reverseWords(string s) {
        int i = 0,vowelCount = 0;
        string ans = "";
        while(i < s.size() and s[i] != ' ')
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowelCount++;
            ans += s[i];
            i++;
        }
        i++;
        string curr = "";
        int count = 0,flag = 0;
        while(i < s.size())
        {
            flag = 1;
            if(s[i] == ' ')
            {
                ans += ' ';
                if(count == vowelCount) reverse(curr.begin(),curr.end());
                ans += curr;
                curr = "";
                count = 0;
            }
            else
            {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
                curr += s[i];
            }
            i++;
        }
        cout<<vowelCount<<" "<<count;
        if(flag)
        {
            ans += ' ';
            if(count == vowelCount) reverse(curr.begin(),curr.end());
            ans += curr;
        }
        return ans;
        
    }
};