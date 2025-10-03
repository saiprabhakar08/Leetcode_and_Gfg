class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long mul = 1;
        while(n)
        {
            if(n % 10) ans.push_back((int)((n % 10) * mul));
            mul = (mul * 10);
            n /= 10;
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
        
    }
};