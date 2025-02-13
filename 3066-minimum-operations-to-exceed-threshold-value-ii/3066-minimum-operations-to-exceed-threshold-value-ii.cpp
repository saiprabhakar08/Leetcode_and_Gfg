class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push(nums[i]);
        }
        int count=0;
        while(1)
        {
            if(temp.top()<k)
            {
                long long s1=temp.top();
                temp.pop();
                long long s2=temp.top();
                temp.pop();
                long long res=s1*2+s2;
                temp.push(res);
                count++;
            }
            else break;
        }
        return count;
        
    }
};