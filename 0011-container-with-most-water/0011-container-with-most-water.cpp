class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0,j = height.size() - 1,max_area = 0;
        while(i<j)
        {
            int len = min(height[i],height[j]);
            int wid = j - i;
            int area = len * wid;
            max_area = max(max_area,area);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_area;

        
    }
};