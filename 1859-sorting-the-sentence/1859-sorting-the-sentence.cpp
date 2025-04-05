class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int,string>temp;
        string temp1="";
        for(auto it:s)
        {
            if(it==' ')
            {
                temp[temp1[temp1.size()-1]-'0']=temp1;
                temp1="";
            }
            else
            {
                temp1+=it;
            }
        }
        temp[temp1[temp1.size()-1]-'0']=temp1;
        string ans="";
        for(int j=1;j<=temp.size();j++)
        {
            ans+=temp[j];
            ans.pop_back();
            if(j+1<=temp.size()) ans+=' ';
        }
        return ans;
    }
};