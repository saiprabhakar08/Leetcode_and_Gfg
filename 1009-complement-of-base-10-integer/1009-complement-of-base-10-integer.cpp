class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string binary="";
        while(n)
        {
            binary=(to_string(!(n&1)))+binary;
            n>>=1;
        }
        // cout<<binary;
        return stoi(binary,0,2);
    }
};