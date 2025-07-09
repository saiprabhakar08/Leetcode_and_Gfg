class Solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        int[] ans = new int[2];
        Map<Integer,Integer>nums1freq = new HashMap<>();
        Map<Integer,Integer>nums2freq = new HashMap<>();
        for(int it : nums1)
        {
            nums1freq.put(it,nums1freq.getOrDefault(it,0)+1);
        }
        for(int it : nums2)
        {
            nums2freq.put(it,nums2freq.getOrDefault(it,0)+1);
        }
        for(int it : nums1)
        {
            if(nums2freq.containsKey(it))
            {
                ans[0]++;
            }
        }
        for(int it : nums2)
        {
            if(nums1freq.containsKey(it))
            {
                ans[1]++;
            }
        }
        return ans;
    }
}