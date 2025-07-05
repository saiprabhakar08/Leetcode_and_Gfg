class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer,Integer>freq = new HashMap<>();
        for(int it : arr)
        {
            freq.put(it,freq.getOrDefault(it,0) + 1);
        }
        int maxi = -1;
        for(Map.Entry<Integer,Integer>entry : freq.entrySet())
        {
            if(entry.getKey() == entry.getValue())
            {
                if(entry.getKey() > maxi)
                {
                    maxi = entry.getKey();
                }
            }
        }
        return maxi;
    }
}