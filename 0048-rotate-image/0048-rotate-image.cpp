class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp;
        int n = matrix.size(),m = matrix[0].size();
        for(int i = 0 ; i < m ; i++)
        {
            vector<int>temp1;
            for(int j = n - 1 ; j >= 0 ; j--)
            {
                temp1.push_back(matrix[j][i]);
            }
            temp.push_back(temp1);
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                matrix[i][j] = temp[i][j];
            }
        }

        
    }
};