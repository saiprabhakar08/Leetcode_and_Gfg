class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        ans.push_back(words[0]);
        int j = 0;
        for(int i = 1 ; i < words.size() ; i++)
        {
            string temp = words[i];
            string temp1 = ans[j];
            sort(temp.begin(),temp.end());
            sort(temp1.begin(),temp1.end());
            if(temp != temp1)
            {
                ans.push_back(words[i]);
                j++;
            }
        }
        return ans;
        
    }
};