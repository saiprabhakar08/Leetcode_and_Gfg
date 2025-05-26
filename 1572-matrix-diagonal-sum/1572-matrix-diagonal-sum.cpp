class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=mat.size(),sum=0,temp=s;
        s-=1;
        for(int i=0;i<mat.size();i++)
        {
             sum+=mat[i][i];
             sum+=mat[i][s];
             s--;
        }
        if(temp%2!=0) {
            sum-=mat[temp/2][temp/2];
        }
        return sum;
    }
};