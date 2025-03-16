class Solution {
public:
    int hammingDistance(int x, int y) {
        int diffCount=0;
        while(x and y)
        {
            if((x&1)!=(y&1)) diffCount++;
            x>>=1;
            y>>=1;
        }
        if(x!=0)
        {
            while(x)
            {
                if(x&1) diffCount++;
                x>>=1;
            }
        }
        if(y!=0)
        {
            while(y)
            {
                if(y&1) diffCount++;
                y>>=1;
            }
        }
        return diffCount;
        
    }
};