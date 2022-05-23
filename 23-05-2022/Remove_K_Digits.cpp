class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(auto  c: num)
        {
            while(!s.empty() && s.back()>c && k)
            {
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        while(k--)
            s.pop_back();
        while(s.front()=='0')
            s.erase(s.begin());
        return s.empty()? "0":s;
    }
};
