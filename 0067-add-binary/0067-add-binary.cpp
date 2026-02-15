class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1,j = b.size() - 1;
        string ans = "";
        int carry = 0;
        while((i >= 0) && (j >= 0))
        {
            if(a[i] == '1' && b[j] == '1')
            {
                if(carry) ans += '1';
                else ans += '0';
                carry = 1;
                // cout<<carry<<endl;
            }
            else if((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
            {
                if(carry) ans += '0';
                else ans += '1';
            }
            else
            {
                if(carry) ans += '1';
                else ans += '0';
                carry = 0;
            }
            i--;
            j--;
            // cout<<ans<<endl;
        }
        // cout<<carry<<endl;
        while(i >= 0)
        {
            if(a[i] == '1')
            {
                // cout<<"Hello";
                if(carry) ans += '0';
                else ans += '1';
            }
            else
            {
                if(carry)
                {
                    ans += '1';
                    carry = 0;
                }
                else
                {
                    ans += '0';
                }
            }
            i--;
            // cout<<ans<<endl;
        }
        while(j >= 0)
        {
            if(b[j] == '1')
            {
                if(carry) ans += '0';
                else ans += '1';
            }
            else
            {
                if(carry)
                {
                    ans += '1';
                    carry = 0;
                }
                else
                {
                    ans += '0';
                }
            }
            j--;
            // cout<<ans<<endl;
        }
        if(carry) ans += '1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};