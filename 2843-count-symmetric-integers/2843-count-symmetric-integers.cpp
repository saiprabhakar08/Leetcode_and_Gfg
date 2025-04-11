class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        if(low<=10 and high<=10) return 0;
        if((low>99 and low <=1000) and (high>99 and high<=1000)) return 0;
        int i=low;
        while(i<=high)
        {
            if(i<=10) i=11;
            else if(i>=100 and i<=1000) i=1001;
            else
            {
                string temp=to_string(i);
                int j=0,k=temp.size()-1,left=0,right=0;
                while(j<k)
                {
                    left+=(temp[j]-'0');
                    right+=(temp[k]-'0');
                    j++;
                    k--;
                }
                if(left==right) ans++;
                i++;
            }
        }
        return ans;
    }
};