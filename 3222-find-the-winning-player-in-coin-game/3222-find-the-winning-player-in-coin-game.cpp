class Solution {
public:
    string winningPlayer(int x, int y) {
        int i=1;
        while(x>=1 and y>=4)
        {  
            x--;
            y=y-4;
            i++;
        }
        if(i%2==0) return "Alice";
        else return "Bob";
        
    }
};