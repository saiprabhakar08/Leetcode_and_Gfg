class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0,area = 0;
        for(int i = 0 ; i < dimensions.size() ; i++)
        {
            int dia = (int)(sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]));
            int a = dimensions[i][0] * dimensions[i][1];
            if(dia > ans)
            {
                ans = dia;
                area = a;
            }
            else if(dia == ans)
            {
                if(a > area)
                {
                    area = a;
                }
            }
        }
        return area;
        
    }
};