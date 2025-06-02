class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>temp;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                if(temp.size()>1)
                {
                    int temp1=temp.top();
                    temp.pop();
                    int temp2=temp1+temp.top();
                    temp.push(temp1);
                    temp.push(temp2);
                }
            }
            else if(operations[i]=="D")
            {
                if(temp.size()>0)
                {
                    int temp1=temp.top();
                    temp1=temp1*2;
                    temp.push(temp1);
                }
            }
            else if(operations[i]=="C")
            {
                if(!(temp.empty())) temp.pop();
            }
            else
            {
                string temp1=operations[i];
                int temp2=0,i=0;
                if(temp1[i]=='-')
                {
                    i++;
                }
                for(i;i<temp1.size();i++)
                {
                    temp2=temp2*10+(temp1[i]-'0');
                }
                if(temp1[0]=='-') temp2*=-1;
                temp.push(temp2);
            }
        }
        int ans=0;
        while(!(temp.empty()))
        {
            ans+=temp.top();
            temp.pop();
        }
        return ans;
        
    }
};