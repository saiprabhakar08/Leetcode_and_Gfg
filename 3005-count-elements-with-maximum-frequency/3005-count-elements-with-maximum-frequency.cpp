class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int m=0;
        map<int,int>A;
        for(int i=0;i<nums.size();i++){
            A[nums[i]]++;
            if(A[nums[i]]>m) m=A[nums[i]];
        }
        int c=0;
        for(auto it : A){
            if(it.second == m) c+=it.second;
        }
        return c;
        
    }
};