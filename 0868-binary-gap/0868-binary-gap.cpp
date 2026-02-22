class Solution {
public:
    int binaryGap(int n) {
        int firstOne = -1,secondOne = -1,ans = 0;
        vector<int>temp;
        while(n)
        {
            if(n & 1) temp.push_back(1);
            else temp.push_back(0);
            n >>= 1;
        }
        reverse(temp.begin(),temp.end());
        for(int i = 0 ; i < temp.size() ; i++)
        {
            if(temp[i] == 1)
            {
                if(firstOne == -1) firstOne = i;
                else
                {
                    secondOne = i;
                    ans = max(ans,secondOne - firstOne);
                    firstOne = secondOne;
                }
            }
        }
        return ans;
    }
};