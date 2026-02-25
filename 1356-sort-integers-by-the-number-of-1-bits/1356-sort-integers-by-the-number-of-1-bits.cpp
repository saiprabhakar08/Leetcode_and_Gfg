class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mpp;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            int temp = arr[i];
            int count = 0;
            while(temp)
            {
                if(temp & 1) count++;
                temp >>= 1;
            }
            mpp[count].push_back(arr[i]);
        }
        vector<int>ans;
        for(auto it : mpp)
        {
            sort(it.second.begin(),it.second.end());
            for(int i = 0 ; i < it.second.size() ; i++)
            {
                ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};