class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int, int> temp;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (i != j and j != k and k != i) {
                int numform =digits[i] * 100 + digits[j] * 10 + digits[k];
                    if((numform&1)==0 and (digits[i]!=0))
                    {
                        temp[numform]++;
                    }
                    }
                }
            }
        }
return temp.size();
    }
};