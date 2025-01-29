class Solution {
public:
    int romanToInt(string s) {
        map<char,int> a;
        int sum=0;
        a['I']=1;
        a['V']=5;
        a['X']=10;
        a['L']=50;
        a['C']=100;
        a['D']=500;
        a['M']=1000;
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]]<a[s[i+1]])
            {
                int temp= ((a[s[i+1]])-(a[s[i]]));
                sum=sum+temp;
                i++;

            }
            else
            {
                sum+=a[s[i]];
            }
        }
        return sum;
        
    }
};