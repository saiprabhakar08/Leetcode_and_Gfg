class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double ans = 0;
        int area = 0;
        for(int i = 0 ; i < dimensions.size() ; i++)
        {
            double dia = (sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]));
            int a = dimensions[i][0] * dimensions[i][1];
            cout<<dia<<" "<<a<<endl;
            if(dia > ans)
            {
                ans = dia;
                area = a;
            }
            else if(dia == ans)
            {
                area = max(a,area);
            }
        }
        return area;
        
    }
};