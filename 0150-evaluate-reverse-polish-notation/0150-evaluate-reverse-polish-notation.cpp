class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>nums;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                if(nums.size()>1)
                {
                    int temp1=nums.top();
                    nums.pop();
                    int temp2=nums.top();
                    nums.pop();
                    if(tokens[i]=="+") nums.push(temp2+temp1);
                    else if(tokens[i]=="-") nums.push(temp2-temp1);
                    else if(tokens[i]=="*") nums.push(temp2*temp1);
                    else if(tokens[i]=="/") nums.push(temp2/temp1);
                }
            }
            else
            {
                int number=0,j=0;
                if(tokens[i][0]=='-') j++;
                for(j;j<tokens[i].size();j++)
                {
                    number=number*10+(tokens[i][j]-'0');
                }
                if(tokens[i][0]=='-') number*=-1;
                nums.push(number);
            }
        }    
        return nums.top();    
    }
};