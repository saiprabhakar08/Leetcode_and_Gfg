class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        if(grid[0][1]==grid[1][1] and grid[1][0]==grid[1][1]) return true;
        else if((grid[0][0]==grid[1][0] and grid[1][0]==grid[1][1]) or (grid[1][1]==grid[1][2] and grid[0][2]==grid[1][2])) return true;
        else if(grid[0][1]==grid[1][1] and grid[1][1]==grid[1][2]) return true;
        else if((grid[0][0]==grid[0][1] and grid[0][1]==grid[1][1]) or (grid[2][0]==grid[2][1] and grid[2][1]==grid[1][1])) return true;
        else if((grid[0][0]==grid[0][1] and grid[0][0]==grid[1][0]) or (grid[0][1]==grid[0][2] and grid[0][2]==grid[1][2]) or (grid[2][0]==grid[1][0] and grid[2][0]==grid[2][1]) or (grid[2][1]==grid[2][2] and grid[2][2]==grid[1][2])) return true;
        else if(grid[1][0]==grid[1][1] and grid[1][1]==grid[2][1]) return true;
        else if((grid[1][0]==grid[1][1] and grid[1][0]==grid[2][0]) or (grid[1][1]==grid[1][2] and grid[1][2]==grid[2][2]))return true;
        else if(grid[1][1]==grid[1][2] and grid[1][1]==grid[2][1]) return true;
        else return false;
        
    }
};