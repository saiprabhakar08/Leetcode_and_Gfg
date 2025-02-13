class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push(nums[i]);
        }
        int count=0;
        while(1)
        {
            if(temp.top()<k)
            {
                int s1=temp.top();
                temp.pop();
                int s2=temp.top();
                temp.pop();
                int res=s1*2+s2;
                temp.push(res);
                // temp.push(res);
                cout<<s1<<" "<<s2<<" "<<res<<endl;
                count++;
            }
            else break;
        }
        return count;
        
    }
};