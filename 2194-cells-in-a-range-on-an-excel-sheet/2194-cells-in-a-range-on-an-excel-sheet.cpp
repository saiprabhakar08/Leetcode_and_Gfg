class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        char start = s[0],end = s[3];
        while(start <= end)
        {
            char numStart = s[1], numEnd = s[4];           
            while(numStart <= numEnd)
            {
                string temp = "";
                temp += start;
                temp += numStart;
                ans.push_back(temp);
                numStart++;
            }
            start++;
        }
        return ans;
        
    }
};