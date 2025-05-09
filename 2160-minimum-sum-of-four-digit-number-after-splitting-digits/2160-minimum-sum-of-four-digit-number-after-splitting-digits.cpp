class Solution {
public:
    int minimumSum(int num) {
        vector<int>a;
        while(num!=0)
        {
            a.push_back(num%10);
            num/=10;
        }
        sort(a.begin(),a.end());
        return(a[0]*10+a[3]+a[1]*10+a[2]);
        
    }
};