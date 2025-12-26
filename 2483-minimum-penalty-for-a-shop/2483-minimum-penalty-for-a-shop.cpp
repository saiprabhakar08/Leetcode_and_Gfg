class Solution {
public:
    int bestClosingTime(string customers) {
        int customersCount = 0;
        for(auto it : customers) if(it == 'Y') customersCount++;
        if(customersCount == 0) return 0;
        int minPenalty = customersCount,ans = 0;
        int emptyHour = 0,currentHour = 0;
        for(auto it : customers)
        {
            currentHour++;
            if(it == 'Y') customersCount--;
            else emptyHour++;
            if((customersCount + emptyHour) < minPenalty) 
            {
                ans = currentHour;
                minPenalty = customersCount + emptyHour;
            }
        }
        return ans;

        
    }
};