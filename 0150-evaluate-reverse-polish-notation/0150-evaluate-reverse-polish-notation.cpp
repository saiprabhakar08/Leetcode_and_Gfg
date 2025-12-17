class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>postFix;
        for(auto it : tokens)
        {
            if(it == "+" || it == "-" || it == "*" || it == "/")
            {
                int temp1 = postFix.top();
                postFix.pop();
                int temp2 = postFix.top();
                postFix.pop();
                if(it == "+") postFix.push(temp2 + temp1);
                else if(it == "-") postFix.push(temp2 - temp1);
                else if(it == "*") postFix.push(temp2 * temp1);
                else if(it == "/") postFix.push(temp2 / temp1);
            }
            else
            {
                int num = 0;
                for(int i = 0 ; i < it.size() ; i++) num = num * 10 + (it[i] - '0');
                postFix.push(num);
            }
        }
        return postFix.top();
        
    }
};