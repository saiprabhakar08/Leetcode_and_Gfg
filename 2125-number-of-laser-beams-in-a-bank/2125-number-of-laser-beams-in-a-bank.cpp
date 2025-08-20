class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>temp;
        for(int i = 0 ; i < bank.size() ; i++)
        {
            int sum = 0;
            for(int j = 0 ; j < bank[i].size() ; j++)
            {
                if(bank[i][j] == '1') sum++;
            }
            // cout<<sum<<endl;
            temp.push_back(sum);
        }
        int ans = 0;
        int i = 0,j = 0;
        for(int k = 0 ; k < temp.size() ; k++)
        {
            if(temp[k] != 0)
            {
                i = k;
                j = k+1;
                break;
            }
        }
        while((j<temp.size()) && (i < temp.size() - 1))
        {
            if(temp[j]!=0)
            {
                ans+=(temp[i] * temp[j]);
                i = j;
            }
            j++;
        }
        return ans;
    }
};