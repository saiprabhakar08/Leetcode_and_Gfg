class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>res(num_people,0);
        int i=0,temp=1;
        while(candies)
        {
            if(candies>=temp) res[i]+=temp;
            else 
            {
                res[i]+=candies;
                break;
            }
            i++;
            candies-=temp;
            if((i)==num_people) i=0;
            temp++;
            
            
        }
        return res;
    }
};