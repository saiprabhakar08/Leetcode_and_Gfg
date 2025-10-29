class Solution {
public:
    int smallestNumber(int n) {
        int size = 0;
        int temp = n;
        while(temp)
        {
            temp >>= 1;
            size++;
        }
        int mask = (1 << size) - 1;
        // cout<<mask<<" "<< size;
        return n | mask;
    }
};