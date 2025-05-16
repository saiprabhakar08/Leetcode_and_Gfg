class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
      if(nums1.size()>nums2.size())
      {
        unordered_map<int,int>a;
        for(int i=0;i<nums1.size();i++)
        {
            a[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(a[nums2[i]]>=1)
            {
                ans.push_back(nums2[i]);
                a[nums2[i]]--;
            }
        }
        return ans;
      }
      else
      {
        unordered_map<int,int>a;
        for(int i=0;i<nums2.size();i++)
        {
            a[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(a[nums1[i]]>=1)
            {
                ans.push_back(nums1[i]);
                a[nums1[i]]--;
            }
        }
        return ans;
      }
    }
};