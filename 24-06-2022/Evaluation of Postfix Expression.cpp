int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                st.push(s[i]-'0');
            }
            else
            {
                if(st.size()<=1)
                    return -1;
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();
                switch(s[i])
                {
                    case '+': st.push(first+second);
                        break;
                    case '-': st.push(first-second);
                        break;
                    case '/': st.push(first/second);
                        break;
                    case '*': st.push(first*second);
                        break;
                }
            }
        }
        return st.top();
    }
