class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>a;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
        a.push_back(arr[i]);
          int temp=arr[i];
          sum+=temp;
          for(int j=i+1;j<arr.size();j++)
          {
            a.push_back(arr[j]);
            temp+=arr[j];
            if(a.size()%2!=0) sum+=temp;
          }
          a.clear();
        }
        return sum;
    }
};