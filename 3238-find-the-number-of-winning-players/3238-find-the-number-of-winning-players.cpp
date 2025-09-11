class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int count=0;
        for(int i=0;i<pick.size();i++)
        {
            vector<int>colors(11,0);
            int flag=0;
            for(int j=0;j<pick.size();j++)
            {
                if(pick[j][0]==i)
                {
                    colors[pick[j][1]]++;
                    if(colors[pick[j][1]]>i)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                count++;
            }
        }

        return count;
    }
};