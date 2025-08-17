class neighborSum {
public:
    vector<vector<int>>grid;
    neighborSum(vector<vector<int>>& grid) {
      this->grid=grid;  
    }
    
    int adjacentSum(int value) {
        int row,col,sum=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==value)
                {
                    row=i;
                    col=j;
                    break;
                }
            }
        }
        if((col-1)>=0)
        {
            sum+=grid[row][col-1];
        }
        if((row-1)>=0)
        {
            sum+=grid[row-1][col];
        }
        if((col+1)<grid[0].size())
        {
            sum+=grid[row][col+1];
        }
        if((row+1)<grid.size())
        {
            sum+=grid[row+1][col];
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int row,col,sum=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==value)
                {
                    row=i;
                    col=j;
                    break;
                }
            }
        }
        if((row-1)>=0 and (col-1)>=0)
        {
            sum+=grid[row-1][col-1];
        }
        if((row-1)>=0 and (col+1)<grid[0].size())
        {
            sum+=grid[row-1][col+1];
        }
        if((row+1)<grid.size() and (col-1)>=0)
        {
            sum+=grid[row+1][col-1];
        }
        if((row+1)<grid.size() and (col+1)<grid[0].size())
        {
            sum+=grid[row+1][col+1];
        }
        return sum;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */