class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i = 0 ; i < mat.size() ; i++)
        {
            int index,sum = 0;
            for(int j = 0 ; j < mat[i].size() ; j++)
            {
                if(mat[i][j] == 1)
                {
                    sum += 1;
                    index = j;
                }
            }
            int sum2 = 0;
            if(sum == 1)
            {
                for(int j = 0 ; j < mat.size() ; j++)
                {
                    if(mat[j][index] == 1)
                    {
                        sum2 += 1; 
                    }
                }
                if(sum2 == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};