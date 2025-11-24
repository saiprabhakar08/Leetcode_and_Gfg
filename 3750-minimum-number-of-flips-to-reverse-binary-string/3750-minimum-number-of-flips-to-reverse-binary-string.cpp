class Solution {
public:
    int minimumFlips(int n) {
        string temp;
        while(n)
        {
            if(n&1) temp += '1';
            else temp += '0';
            n >>= 1;
        }
        string temp1 = temp;
        reverse(temp1.begin(),temp1.end());
        int ans = 0;
        for(int i = 0 ; i < temp.size() ; i++)
        {
            if(temp[i] != temp1[i]) ans++;
        }
        return ans;
        
    }
};