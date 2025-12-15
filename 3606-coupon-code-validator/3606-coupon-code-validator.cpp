class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<vector<string>>arr(4);
        for(int i = 0 ; i < code.size() ; i++)
        {
            if(isActive[i])
            {
                string temp = code[i];
                bool flag = true;
                if(temp.size() == 0) flag = false;
                for(int j = 0 ; j < temp.size() ; j++)
                {
                    int digi = temp[j];
                    if((temp[j] != '_') && ((digi < 48) || (digi > 57)) && ((digi < 65) || (digi > 90)) && ((digi < 97) || (digi > 122)))
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag) 
                {
                    if(businessLine[i] == "electronics") arr[0].push_back(code[i]);
                    else if(businessLine[i] == "grocery") arr[1].push_back(code[i]);
                    else if(businessLine[i] == "pharmacy") arr[2].push_back(code[i]);
                    else if(businessLine[i] == "restaurant") arr[3].push_back(code[i]);
                }
            }
        }
        vector<string>ans;
        for(int i = 0 ; i < 4 ; i++)
        {
            sort(arr[i].begin(),arr[i].end());
            for(int j = 0 ; j < arr[i].size() ; j++)
            {
                ans.push_back(arr[i][j]);
            }
        }
        return ans;

        
    }
};