void dfs(vector<int> &ans, vector<bool> &vis, int i, vector<int> adj[]){
           ans.push_back(i);
           vis[i] = true;
           for(auto x: adj[i]){
               if(vis[x] == false){
                   dfs(ans, vis, x, adj);
               }
           }
       }
  public: 
       vector<int> dfsOfGraph(int V, vector<int> adj[]) {
           // Code here
           vector<int> ans;
           vector<bool> visited(V, false);
           dfs(ans, visited, 0, adj);

           return ans;
       }
