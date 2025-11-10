class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxi = logs[0][1],id = logs[0][0];
        for(int i = 1 ; i < logs.size() ; i++)
        {
            int curr_dur = logs[i][1] - logs[i - 1][1];
            if(curr_dur > maxi)
            {
                maxi = curr_dur;
                id = logs[i][0];
            } 
            else if(curr_dur == maxi)
            {
                id = min(logs[i][0],id);
            }
        }
        return id;
        
    }
};