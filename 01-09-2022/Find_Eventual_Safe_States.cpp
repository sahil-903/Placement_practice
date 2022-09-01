class Solution {
    bool dfs(int i,vector<vector<int>>& graph,vector<bool> &vis,vector<bool> &dfsvis,vector<bool> &pres_cyc)
    {
        vis[i]=true;
        dfsvis[i]=true;
        vector<int> data=graph[i];
        for(auto x: data)
        {
            if(!vis[x])
            {
                if(dfs(x,graph,vis,dfsvis,pres_cyc))
                    return pres_cyc[i]=true;
            }
            else if(dfsvis[x] && vis[x])
                return pres_cyc[i]=true;
        }
        dfsvis[i]=false;
        return false;
        
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool> vis(n,false),dfsvis(n,false),pres_cyc(n,false);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,graph,vis,dfsvis,pres_cyc);
            }
        }
        for(int i=0;i<pres_cyc.size();i++)
        {
            if(!pres_cyc[i])
                ans.push_back(i);
        }
        return ans;
        
    }
};
