class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1 ; i <= num2 ; i++)
        {
            if(i <= 100) i = 100;
            else
            {
                string temp = to_string(i);
                int wave = 0;
                for(int j = 1; j < temp.size() - 1 ; j++)
                {
                        if(temp[j] < temp[j - 1] && temp[j] < temp[j + 1]) wave++;
                        else if(temp[j] > temp[j - 1] && temp[j] > temp[j + 1]) wave++;
                }
                ans += wave;
            }
        }
        return ans;
        
    }
};