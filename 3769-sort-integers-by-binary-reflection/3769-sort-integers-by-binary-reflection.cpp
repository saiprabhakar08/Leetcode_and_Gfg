class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        map<int,vector<int>>freq;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int temp = nums[i];
            string rev = "";
            while(temp)
            {
                if(temp & 1) rev += '1';
                else rev += '0';
                temp >>= 1;
            }
            int reversed = 0;
            int j = rev.size() - 1, k = 1;
            while(j >= 0)
            {
                if(rev[j] == '1')
                {
                    reversed += k;
                }
                k *= 2;
                j--;
            }
            cout<<reversed<<endl;
            freq[reversed].push_back(nums[i]);
        }
        vector<int>ans;
        for(auto it : freq)
        {
            sort(it.second.begin(),it.second.end());
            for(auto temp : it.second)
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};