class Solution {
public:
    bool isNumber(string s) {
        bool digitseen=false,eseen=false,dotseen=false;
        int countplusminus=0;
        
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(isdigit(ch))
                digitseen=true;
            else if(ch=='+' || ch=='-')
            {
                if(countplusminus==2)
                {
                    return false;
                }
                if(i>0 && (s[i-1]!='e' && s[i-1]!='E'))
                {
                    return false;
                }
                if(i==s.size()-1)
                {
                    return false;
                }
                countplusminus++;
            }
            else if(ch=='.')
            {
                if(eseen || dotseen)
                {
                    return false;
                }
                if(i==s.size()-1 && !digitseen)
                {
                    return false;
                }
                dotseen=true;
            }
            else if(ch=='e' || ch=='E')
            {
                if(eseen || !digitseen || i==s.size()-1)
                {
                    return false;
                }
                eseen = true;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
