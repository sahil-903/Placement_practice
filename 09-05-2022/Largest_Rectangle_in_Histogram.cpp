class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n=height.size();
        stack<int> st;
        int leftsmall[n],rightsmall[n];
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty() )
                leftsmall[i]=0;
            else
                leftsmall[i]=st.top()+1;
            st.push(i);
        }
        
        // clear the stock to be re-used
        while(!st.empty())
            st.pop();
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty())
                rightsmall[i]=n-1;
            else
                rightsmall[i]=st.top()-1;
            
            st.push(i);
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,(rightsmall[i]-leftsmall[i]+1)*height[i]);
        }
        return mx;
    }
};
