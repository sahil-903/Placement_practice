class Solution {
public:
    bool isValid(string s) {
        stack<int> check;
        for(int i=0;i<s.size();i++){
            if(check.empty())
            {
                check.push(s[i]); 
                continue;
            }
            
            if(check.top()=='{'){
                if(s[i]=='}') {check.pop(); continue;}
                else{check.push(s[i]);}
            }else if(check.top()=='('){
                if(s[i]==')') {check.pop(); continue;}
                else{check.push(s[i]);}
            }else if(check.top()=='['){
                if(s[i]==']') {check.pop(); continue;}
                else{check.push(s[i]);}
            }else{
                check.push(s[i]);
                cout<<s[i]<<" ";
            }
        }
        if(check.empty()) return true;
        
        return false;
    }
};
