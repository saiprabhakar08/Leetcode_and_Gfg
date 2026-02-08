class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;
        for(auto it : nums)
        {
            if(st.empty()) st.push(it);
            else
            {
                if(it == st.top())
                {
                    cout<<it<<" ";
                    long long temp = it;
                    while(!(st.empty()) && (st.top() == temp))
                    {
                        temp = temp * 2;
                        st.pop();
                    } 
                    st.push(temp);
                }
                else
                {
                    st.push(it);
                }
            }
        }
        vector<long long>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};