class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>sum;
        for(int i=1;i<=n;i++)
        {
            int temp=i;
            int sum1=0;
            while(temp)
            {
                sum1+=(temp%10);
                temp/=10;
            }
            sum[sum1]++;
        }
        int maxi=0;
        for(auto it:sum)
        {
            if(it.second>maxi) maxi=it.second;
        }
        int ans=0;
        for(auto it:sum) if(it.second==maxi) ans++;
        return ans;

        
    }
};