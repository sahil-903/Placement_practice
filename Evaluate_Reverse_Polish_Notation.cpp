class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(st.empty())
            {
                string temp=tokens[i];
                st.push(stoi(temp));
            }
            else
            {
                string temp=tokens[i];
                if(temp.size()>1 || isdigit(temp[0])) 
                {
                    st.push(stoi(temp));
                }
                else
                {
                    if(st.size()<2)
                        return -1;
                    else
                    {
                        int a=st.top();
                        st.pop();
                        int b=st.top();
                        st.pop();
                        string c=tokens[i];
                        char s=c[0];
                        switch(s)
                        {
                            case '+': st.push(b+a);
                                break;
                            case '-': st.push(b-a);
                                break;
                            case '/': st.push(b/a);
                                break;
                            case '*': st.push(b*a);
                                break;
                        }
                    }
                    
                }
            }
        }
        return st.top();
    }
};
