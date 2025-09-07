class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if((n&1) == 0)
        {
            int i = 1;
            while(n)
            {
                ans.push_back(i);
                ans.push_back(-1*i);
                i++;
                n -= 2;
            }
            return ans;
        }
        else
        {
            int i = 1;
            while(n > 1)
            {
                ans.push_back(i);
                ans.push_back(-1*i);
                i++;
                n -= 2;
            }
            ans.push_back(0);
            return ans;

        }
        
    }
};