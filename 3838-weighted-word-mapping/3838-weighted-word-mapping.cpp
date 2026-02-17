class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(auto it : words)
        {
            int sum = 0;
            for(int i = 0 ; i < it.size() ; i++)
            {
                sum += weights[it[i] - 'a'];
            }
            sum %= 26;
            char temp = (char)(122 - sum);
            ans += temp;
        }
        return ans;
    }
};