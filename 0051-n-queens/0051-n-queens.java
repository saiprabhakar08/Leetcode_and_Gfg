class Solution {
    public static void nQueensImplementation(int n,int col,char[][] board,boolean[] rows,boolean[] antiDiagonal,boolean[] mainDiagonal,List<List<String>> ans)
    {
        if(col == n)
        {
            List<String> temp = new ArrayList<>();
            for(char[] it : board)
            {
                String s = new String(it);
                temp.add(s);
            }
            ans.add(temp);
            return;
        }
        for(int row = 0 ; row < n ; row++)
        {
            if((!rows[row]) && (!antiDiagonal[row + col]) && (!mainDiagonal[(n-1) + col - row]))
            {
                board[row][col] = 'Q';
                rows[row] = true;
                antiDiagonal[row + col] = true;
                mainDiagonal[(n-1)+col-row] = true;
                nQueensImplementation(n,col+1,board,rows,antiDiagonal,mainDiagonal,ans);
                board[row][col] = '.';
                rows[row] = false;
                antiDiagonal[row + col] = false;
                mainDiagonal[(n-1)+col-row] = false;
            }
        }
    }
    public List<List<String>> solveNQueens(int n) {
        char[][] board = new char[n][n];
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                board[i][j] = '.';
            }
        }
        boolean[] rows = new boolean[n];
        boolean[] antiDiagonal = new boolean[2 * n - 1];
        boolean[] mainDiagonal = new boolean[2 * n - 1];
        List<List<String>> ans  = new ArrayList<>();
        nQueensImplementation(n,0,board,rows,antiDiagonal,mainDiagonal,ans);
        return ans;
        
    }
}