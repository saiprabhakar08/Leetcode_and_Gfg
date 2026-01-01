class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int i = digits.size() - 1;
        int temp = digits[i] + 1;
        if(temp == 10)
        {
            digits[i] = 0;
            carry = 1;
        }
        else
        {
            digits[i] += 1;
            return digits;
        } 
        i--;
        for( i ; i >= 0 ; i--)
        {
            if(carry)
            {
                int temp = digits[i] + 1;
                if(temp == 10)
                {
                    digits[i] = 0;
                    carry = 1;
                }
                else
                {
                    digits[i] += 1;
                    return digits;
                }
            }
        }
        if(carry) digits.insert(digits.begin(),1);
        return digits;
    }
};