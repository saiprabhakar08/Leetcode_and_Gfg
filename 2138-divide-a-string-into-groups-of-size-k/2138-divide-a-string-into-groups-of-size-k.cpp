class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>res;
        string temp = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(temp.size() == k)
            {
                res.push_back(temp);
                temp = "";
            }
            temp += s[i];
        }
        if(temp.size() > 0)
        {
            while(temp.size() != k)
            {
                temp += fill;
            }
        }
        res.push_back(temp);
        return res;
        
    }
};