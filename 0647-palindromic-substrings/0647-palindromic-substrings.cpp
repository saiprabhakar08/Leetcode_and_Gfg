class Solution {
public:
    int countSubstrings(string s) {
        int ans = s.size();
        for(int i = 0 ; i < s.size() ; i++)
        {
            string temp = "";
            temp += s[i];
            for(int j = i+1 ; j < s.size() ; j++)
            {
                temp += s[j];
                string temp1 = temp;
                reverse(temp1.begin(),temp1.end());
                if(temp == temp1) ans++;
            }
        }
        return ans;
    }
};