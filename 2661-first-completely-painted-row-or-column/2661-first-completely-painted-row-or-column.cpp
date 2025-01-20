class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,pair<int,int>>pos;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                pos[mat[i][j]]={i,j};
            }
        }
        vector<int>freq(mat.size()+mat[0].size(),0);
        for(int i=0;i<arr.size();i++)
        {
            pair<int,int>temp=pos[arr[i]];
            freq[temp.first]++;
            freq[mat.size()+temp.second]++;
            if(freq[temp.first]==mat[0].size()) return i;
            if(freq[mat.size()+temp.second]==mat.size()) return i;
                
        }
        return 0;
        
    }
};