class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>temp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            temp.push_back(nums[i] * nums[i]);
        }
        sort(temp.begin(),temp.end());
        int i = 0, j = temp.size() - 1;
        long long ans = 0;
        while(i < j)
        {
            ans += (temp[j] - temp[i]);
            i++;
            j--;
        }
        if(temp.size() & 1)
        {
            ans += temp[i];
            cout<<nums[i];
        }
        return ans;
        
    }
};