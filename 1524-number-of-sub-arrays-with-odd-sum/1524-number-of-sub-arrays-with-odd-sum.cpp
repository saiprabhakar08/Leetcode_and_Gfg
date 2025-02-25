class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod=1000000007;
        int p=0,odd=0,even=1,ans=0;
        for(int i=0;i<arr.size();i++)
        {
            p+=arr[i];
            if(p&1)
            {
                odd++;
                ans+=even;
            }
            else
            {
                even++;
                ans+=odd;
            }
            ans%=mod;
        }
        return ans;
        
    }
};