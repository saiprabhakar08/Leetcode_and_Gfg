class Solution {
public:
    string largestGoodInteger(string num) {
        int i = 0, j = 1, k = 2;
        string ans = "";
        while(k < num.size())
        {
            // cout<<k<<endl;
            if((num[i] == num[j]) && (num[j] == num[k]))
            {
                // cout<<num[i]<<" "<<num[j]<<" "<<num[k]<<endl;
                if(ans.size() > 0)
                {
                    if((num[i] - '0') > (ans[0] - '0'))
                    {
                        ans[0] = num[i];
                        ans[1] = num[i];
                        ans[2] = num[i];
                    }
                }
                else
                {
                    ans+=num[i];
                    ans+=num[i];
                    ans+=num[i];
                }
            }
            i++;
            j++;
            k++;
        }
        return ans;
    }
};