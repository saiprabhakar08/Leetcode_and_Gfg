class Solution {
public:
    int nextBeautifulNumber(int n) {
        if(n == 0) return 1;
        while(1)
        {
            ++n;
            vector<int>freq(10,0);
            int temp = n;
            while(temp)
            {
                freq[temp % 10]++;
                temp /= 10;
            }
            int flag = 1,flag1 = 0;
            if(freq[1] != 1 && freq[1] != 0) continue;
            if(freq[0] > 0) continue;
            for(int i = 2; i <= 9 ; i++)
            {
                if(freq[i] != i && freq[i] != 0)
                {
                    flag = 0;
                    break;
                }
                if(freq[i] == i)
                {
                    flag1 = 1;
                }
            }
        
            if(flag && flag1) return n;
        }
    }
};