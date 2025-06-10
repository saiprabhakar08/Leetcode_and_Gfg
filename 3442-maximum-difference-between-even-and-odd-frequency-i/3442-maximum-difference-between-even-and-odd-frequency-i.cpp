class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>f;
        for(auto i : s) f[i]++;

        int emini = INT_MAX;
        int omax = INT_MIN;
        
        for(auto i : s){
            if((f[i]%2==0) and (emini>f[i])) emini = f[i];
            if((f[i]%2!=0) and (omax<f[i])) omax = f[i];
        }

        return omax - emini;
    }
};