class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <int> s1,s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!s1.empty())
                {
                    s1.pop();
                }
            }
            else
                s1.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(!s2.empty())
                {
                    s2.pop();
                }
            }
            else
                s2.push(t[i]);
        }
        s="",t="";
        while(!s1.empty()){
            s += s1.top();
            s1.pop();
        }
        
        while(!s2.empty()){
            t += s2.top();
            s2.pop();
        }
        if(s==t)
            return true;
        return false;
        
    }
};
