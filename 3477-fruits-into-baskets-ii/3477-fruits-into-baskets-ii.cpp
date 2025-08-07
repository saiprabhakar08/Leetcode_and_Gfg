class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for(int i = 0 ; i < fruits.size() ; i++)
        {
            for(int j = 0 ; j < baskets.size() ; j++)
            {
                if(baskets[j] >= fruits[i])
                {
                    fruits[i] = 0;
                    baskets[j] = 0;
                    break;
                }
            }
            if(fruits[i] != 0) ans++;
        }
        return ans;
    }
};