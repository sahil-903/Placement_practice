class Solution {
public:
    void dfs(map<int,vector<int>> &mp,set<int> &v,int a,vector<int>& ans)
    {
        if(v.find(a)!=v.end())
            return;
        ans.push_back(a);
        v.insert(a);
        for(auto x: mp[a])
            dfs(mp,v,x,ans);
    }
    vector<int> restoreArray(vector<vector<int>>& a) {
        map<int,vector<int>> mp;
        for(auto x: a)
        {
            mp[x[0]].push_back(x[1]);
            mp[x[1]].push_back(x[0]);
        }
        int head;
        for(auto x: mp)
        {
            if(x.second.size()==1)
                head=x.first;
        }
        set<int> v;
        vector<int> ans;
        dfs(mp,v,head,ans);
        return ans;
    }
};
