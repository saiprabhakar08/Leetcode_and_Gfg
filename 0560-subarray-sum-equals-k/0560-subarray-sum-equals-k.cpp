class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>a;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k){
                count++;
            }
            if(a[sum-k]!=0)
            {
                count+=a[sum-k];  
            }
            if(a[sum]!=0)
            {
                a[sum]+=1;
            }
            else
            {
                a[sum]=1;
            }
        }
        return count;
    }
};