class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else if(temp.size()>=1)
            {
                v.push_back(temp);
                temp="";
            }
        }
        if(temp.size()>=1)
        {
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
        temp="";
        for(int i=0;i<v.size()-1;i++)
        {
            temp+=v[i];
            temp+=" ";
        }
        temp+=v[v.size()-1];
        return temp;
    }
};
