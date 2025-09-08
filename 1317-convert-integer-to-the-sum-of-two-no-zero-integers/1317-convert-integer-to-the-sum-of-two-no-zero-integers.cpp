class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i = 1 ; i <= (n/2) ; i++)
        {
            int temp = i;
            int temp1 = n - i;
            bool flag1 = true,flag2 = true;
            while(temp)
            {
                if((temp%10) == 0)
                {
                    flag1 = false;
                    break;
                }
                temp /= 10;
            }
            if(flag1 == false) continue;
            while(temp1)
            {
                if((temp1%10) == 0)
                {
                    flag2 = false;
                    break;
                }
                temp1 /= 10;
            }
            if(flag1 && flag2)
            {
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
        }
        return ans;
    }
};