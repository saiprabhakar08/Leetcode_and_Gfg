class Solution {
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) {
        int c1l = coordinate1.charAt(0) - 'a';
        int c1d = coordinate1.charAt(1) - '0';
        int c2l = coordinate2.charAt(0) - 'a';
        int c2d = coordinate2.charAt(1) - '0';
        char c1 = (c1l % 2) == 0 ? (c1d % 2) == 1 ? 'b' : 'w' : (c1d % 2) == 1 ? 'w' : 'b'; 
        char c2 = (c2l % 2) == 0 ? (c2d % 2) == 1 ? 'b' : 'w' : (c2d % 2) == 1 ? 'w' : 'b';  
        if(c1 ==c2) return true;
        return false;
    }
}