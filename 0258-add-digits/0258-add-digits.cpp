class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(1)
        {
            sum=0;
        while(num)
        {
            sum+=num%10;
            num/=10; 
        }
        if(sum>9)
        {
            num=sum;
        }
        else break;
        }
        return sum;
    }
};