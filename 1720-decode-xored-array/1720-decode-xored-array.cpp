class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        int i = 0,j = 0;
        while(j < encoded.size())
        {
            ans.push_back(ans[i] ^ encoded[j]);
            i++;
            j++;
        }
        return ans;
        
    }
};