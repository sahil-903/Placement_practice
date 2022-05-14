class Solution {
public:
    bool isPalindrome(int x) {
        string sp=to_string(x);
        int n=sp.size();
        for (int k = 0; k <n; k++)
        {
            int i = n - k - 1;
            if (sp[k] != sp[i])
                return false;
        }
    
        return true;
    }
};



// Another method kind of old submission

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1)
        {
            return true;
        }
        else
            return false;
    }
};
