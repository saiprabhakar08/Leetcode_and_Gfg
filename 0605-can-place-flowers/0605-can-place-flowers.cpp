class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++)
        {
            if(n==0) return true;
            if(flowerbed[i]==0)
            {
                if((i-1)>=0)
                {
                    if(flowerbed[i-1]==0)
                    {
                        if((i+1)<flowerbed.size())
                        {
                            if(flowerbed[i+1]==0)
                            {
                                n--;
                                i++;
                            }
                        }
                        else
                        {
                            n--;
                            i++;
                        }
                    }
                }
                else
                {
                   if((i+1)<flowerbed.size())
                   {
                        if(flowerbed[i+1]==0)
                        {
                            n--;
                            i++;
                        }
                   }
                   else
                   {
                    n--;
                    i++;
                   }
                }
            }
        }
        if(n==0) return true;
        return false;
        
    }
};