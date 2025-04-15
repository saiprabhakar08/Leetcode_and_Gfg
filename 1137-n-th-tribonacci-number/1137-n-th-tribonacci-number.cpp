class Solution {
public:
    int tribonacci(int n) {
            if(n==0) return 0;
            else if(n<2) return 1;
            else
            {
            int a=0,b=1,c=1;
            int i=3;
            while(i<=n)
            {
                int temp=a+b+c;
                a=b;
                b=c;
                c=temp;
                i++;
            }
            return c;
            }
            
    }
};