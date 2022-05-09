class Solution {
public:
        vector<string> v;
        void backtrack(vector<string> &v, string str, int open, int close, int max){
        
        if(str.length() == max*2){
            v.push_back(str);
            return;
        }
        
        if(open < max)
            backtrack(v, str+"(", open+1, close, max);
        if(close < open)
            backtrack(v, str+")", open, close+1, max);
    }
    vector<string> generateParenthesis(int n) {
        
        backtrack(v, "", 0, 0, n);
        return v;
        
    }
};
