class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int temp=numBottles;
        while(temp>=numExchange)
        {
            int divi=temp/numExchange;
            res+=divi;
            temp%=numExchange;
            temp+=divi;  
        }
        return res;

        
    }
};