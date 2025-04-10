class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>scores;
        for(auto it:operations)
        {
            if(it=="+")
            {
                int temp1=scores.top();
                scores.pop();
                int temp2=scores.top();
                scores.push(temp1);

                temp2+=temp1;
                scores.push(temp2);
            }
            else if(it=="D")
            {
                int temp1=scores.top();
                // scores.pop();
                scores.push(temp1+temp1);
            }
            else if(it=="C")
            {
                scores.pop();
            }
            else
            {
                int temp=0;
                int flag=0;
                for(int i=0;i<it.size();i++)
                {
                    // cout<<it[i]<<" ";
                    if(it[i]=='-') flag=1;
                    else temp=temp*10+(it[i]-'0');
                }
                if(flag) temp=temp*-1;
                // cout<<temp<<" "<<it<<endl;
                scores.push(temp);
            }
        }
        int res=0;
        while(!(scores.empty()))
        {
            res+=scores.top();
            scores.pop();
        }
        return res;
        
    }
};