class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
        if (found != string::npos)
            return found;
        return -1;
    }
};



/// second method more simplified

class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
        if (found != -1)
            return found;
        return -1;
    }
};
