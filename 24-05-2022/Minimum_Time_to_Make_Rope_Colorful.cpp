class Solution {
public:
    int minCost(string c, vector<int>& t) 
{
        stack<int>st;
        st.push(0);
        int ans=0;
        for(int i=1;i<c.size();i++)
        {
            if(c[st.top()]==c[i])
            {
                if(t[st.top()]<t[i])
                {
                    ans+=t[st.top()];
                    st.pop();
                    st.push(i);
                }
                else
                    ans+=t[i];
            }
            else
                st.push(i);
        }
        return ans;
    }
};
