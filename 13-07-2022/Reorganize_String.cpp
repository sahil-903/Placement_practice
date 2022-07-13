class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        unordered_map<char,int> m;
        for(auto x:s) m[x]++;
        priority_queue<pair<int,char>> pq;
        for(auto x:m){
            int a=x.second;
            char b=x.first;
            pq.push({a,b});
        }
        while(pq.size()>1){
            pair<int,char> x=pq.top();
            pq.pop();
            pair<int,char> y=pq.top();
            pq.pop();
            int a=x.first;
            int b=y.first;
            a--;
            b--;
            ans+=x.second;
            ans+=y.second;
            if(a>0){
                pq.push({a,x.second});
            }
            if(b>0){
                pq.push({b,y.second});
            }
        }
        while(!pq.empty()){
            pair<int,int> k=pq.top();
            pq.pop();
            if(k.first>1) return "";
            ans+=k.second;
        }
        return ans;
    }
};
