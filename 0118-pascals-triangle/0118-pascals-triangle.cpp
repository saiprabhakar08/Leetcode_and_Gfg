class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>>res;
        res.push_back({1});
        res.push_back({1,1});
        for(int i=2;i<numRows;i++)
        {
            vector<int>temp;
            for(int j=0;j<=i;j++)
            {
                if(j==0 or j==i)
                {
                    temp.push_back(1);
                }
                else
                {
                    // cout<<res[i-1][j-1]<<" ";
                    temp.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};