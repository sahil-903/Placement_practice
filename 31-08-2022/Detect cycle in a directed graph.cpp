bool checkForCycle(int node,int parent, vector<int> &vis, vector<int> adj[],vector<int> &dfsvis)
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                if(checkForCycle(it,node,vis,adj,dfsvis))
                    return true;
            }
            else if(dfsvis[it])
                return true;
        }
        dfsvis[node]=0;
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        vector<int> dfsvis(V+1,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(checkForCycle(i,-1,vis,adj,dfsvis))
                    return true;
            }
        }
        return false;
    }
