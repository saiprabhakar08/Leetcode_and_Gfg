class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low,mid,high;
        int size=numbers.size()-1;
        for(int i=0;i<numbers.size();i++)
        {
            int rem=target-numbers[i];
            low=i+1;
            high=size;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(rem==numbers[mid]) return {i+1,mid+1};
                else if(rem>numbers[mid])  low=mid+1;
                else high=mid-1;
            }
        }
        return {};
        
    }
};