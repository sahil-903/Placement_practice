class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        // cout<<s<<endl;
        int flag=0;
        string s1="";
        if(x==0)
        {
            return 0;
        }
        if(x<0)
        {
            s1+='-';
            ::reverse(s.begin(), s.end()); 
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]!='0' && flag==0)
                {
                    s1+=s[i];
                    flag=1;
                }
                else if(flag==1)
                {
                    s1+=s[i];
                }
            }
        }
        else
        {
            ::reverse(s.begin(), s.end()); 
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='0' && flag==0)
                {
                    s1+=s[i];
                    flag=1;
                }
                else if(flag==1)
                {
                    s1+=s[i];
                }
            }
        }
        // cout<<s1<<endl;
        if(stoll(s1)<-pow(2,31) || stoll(s1)>pow(2,31)-1)
        {
            return 0;
        }
        return stoll(s1);
    }
};
