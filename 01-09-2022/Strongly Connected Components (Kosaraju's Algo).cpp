void topo( vector<int>&vis,vector<int> adj[], stack<int>&st,int i)
	{
	    vis[i]=1;
	    for(auto j:adj[i])
	    {
	        if(vis[j]==-1)
	        topo(vis,adj,st,j);
	    }
	    st.push(i);
	    return;
	}
	vector<int>dfs( vector<int>adj1[], vector<int>&vis,int i,vector<int>&t)
	{
	    vis[i]=1;
	    t.push_back(i);
	    for(auto j:adj1[i])
	    {
	        if(vis[j]==-1)
	        dfs(adj1,vis,j,t);
	    }
	    return t;
	}
    int kosaraju(int v, vector<int> adj[])
    {
       vector<int>adj1[v];
       for(int i=0;i<v;i++)
       {
           for(auto j:adj[i])
           {
               adj1[j].push_back(i);
           }
       }
       stack<int>st;
       vector<int>vis(v,-1);
       
       for(int i=0;i<v;i++)
       {
           if(vis[i]==-1)
           {
               topo(vis,adj,st,i);
           }
           
       }
       vector<vector<int>>res;
       
       for(int i=0;i<v;i++)
      vis[i]=-1;
       
       while(!st.empty())
       {int x=st.top();
           if(vis[x]==-1)
           {
              vector<int>t;
              t=dfs(adj1,vis,x,t);
              res.push_back(t);
           }
           else
           {
               st.pop();
           }
       }
       
    //   for(auto i:res)
    //   {
    //       for(auto j:i)
    //       cout<<j<<" ";
    //       cout<<endl;
    //   }
       return res.size();
    }
