class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_map<int,int>freq;
        int sum = 0;
        for(auto it:nums) 
        {
            freq[it]++;
            sum+=it;
        }
        float size = nums.size();
        float avg = sum / size;
        int search;
        if(sum % ((int)size))
        {
            search = ceil(avg);
        }
        else
        {
            search = (int)avg + 1;
        }
        cout<<search<<" "<<avg<<" ";
        if(search <= 0) search = 1;
        while(freq.find(search) != freq.end())
        {
            search++;
        }
        return search;

    }
};