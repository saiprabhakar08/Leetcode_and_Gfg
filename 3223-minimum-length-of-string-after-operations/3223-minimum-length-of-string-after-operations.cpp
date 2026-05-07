class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>freq;
        int min_len = 0;
        for(auto ch : s) freq[ch]++;
        for(auto it : freq){
            if(it.second%2==0) min_len+=2;
            else min_len+=1;
        }
        return min_len;
        
    }
};