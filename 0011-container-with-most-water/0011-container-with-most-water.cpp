class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,area=0,max_area=0;
        while(i<j)
        {
            int mini=min(height[i],height[j]);
            area=mini*(j-i);
            if(area>max_area) max_area=area;
            if(height[i]>height[j]) j--;
            else i++;
        }
        return max_area;
        
    }
};