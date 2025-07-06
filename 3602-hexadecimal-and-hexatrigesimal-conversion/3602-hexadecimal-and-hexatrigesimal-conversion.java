class Solution {
    public String concatHex36(int n) {
        long hexnum = n * n;
        String hexStringLong = Long.toHexString(hexnum);
        long hextrinum = n * n * n;
        String hexTriStringLong = Long.toString(hextrinum,36);
        return (hexStringLong + hexTriStringLong).toUpperCase();

        
    }
}