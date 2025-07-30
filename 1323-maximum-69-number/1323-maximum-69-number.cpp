class Solution {
public:
    int maximum69Number (int num) {
        int count = 0;
        int temp = num;
        while(temp)
        {
            count++;
            temp /= 10;
        }
        temp = num;
        while(--count)
        {
            // cout<<(num % ((int)pow(10,count)))<<" ";
            if((temp / ((int)pow(10,count))) == 6)
            {
                num += (3 * pow(10,count));
                // cout<<3 * pow(10,count)<<" ";
                return num;
            }
            temp = temp % (int)pow(10,count);
        }
        if(num % 10 == 6)
        {
            num += 3;
        }
        return num;
    }
};