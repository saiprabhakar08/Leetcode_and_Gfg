class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minrow = grid.size(),mincol = grid[0].size(), maxrow = -1, maxcol = -1;
        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(int j = 0 ; j < grid[i].size() ; j++)
            {
                if(grid[i][j] == 1)
                {
                    minrow = min(minrow,i);
                    mincol = min(mincol,j);
                    maxrow = max(maxrow,i);
                    maxcol = max(maxcol,j);
                }
            }
        }
        return (maxrow - minrow + 1) * (maxcol - mincol + 1);
    }
};