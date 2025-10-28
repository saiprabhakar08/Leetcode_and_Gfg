class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            int flag = 0,findd = -1;
            for(int j = 0 ; j < nums2.size() ; j++)
            {
                if(flag)
                {
                    if(nums2[j] > nums1[i]) 
                    {
                        findd = nums2[j];
                        break;
                    }
                    continue;
                }
                if(nums1[i] == nums2[j])
                {
                    flag = 1;
                }
            }
            ans.push_back(findd);
        }
        return ans;
    }
};