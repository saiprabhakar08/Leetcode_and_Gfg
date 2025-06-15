class Solution {
public:
    int minMaxDifference(int num) {
        int temp = num;
        vector<int>digits;
        while(temp)
        {
            digits.push_back(temp%10);
            temp/=10;
        }
        int maxi,mini;
        bool fmaxi=true,fmini=true;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(fmaxi || fmini)
            {
                if(digits[i]!=9 and fmaxi)
                {
                    maxi=digits[i];
                    fmaxi=false;
                }
                if(fmini)
                {
                    mini=digits[i];
                    fmini=false;
                }
            }
            else
            {
                break;
            }
        }
        int maxii=0,minii=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]==maxi)
            {
                maxii=maxii*10+9;
            }
            else
            {
                maxii=maxii*10+digits[i];
            }
            if(digits[i]==mini)
            {
                minii=minii*10+0;
            }
            else
            {
                minii=minii*10+digits[i];
            }
        }
        return maxii-minii;
        
    }
};