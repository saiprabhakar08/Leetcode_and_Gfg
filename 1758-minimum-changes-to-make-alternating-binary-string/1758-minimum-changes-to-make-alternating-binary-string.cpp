class Solution {
public:
    int minOperations(string s) {
        int pos1 = 0, val = 1, pos2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] - '0') != val)
                pos1++;
            else
                pos2++;
            if (val == 1)
                val = 0;
            else
                val = 1;
        }
        return min(pos1, pos2);
    }
};