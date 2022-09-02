int spanningTree(int v, vector<vector<int>> adj[])
   {
       vector<int> key(v,INT_MAX);
       key[0]=0;
       vector<bool> mst(v,false);
       int ans=0;
       int ct=v;
       while(ct--)
       {
           int u=-1;
           for(int i=0;i<v;i++)
           {
               if(mst[i]==false && (u==-1 || key[i]<key[u]))
               u=i;
           }
           
           ans+=key[u];
           mst[u]=true;
           
           for(auto x:adj[u])
           {
               int t=x[0];
               if(mst[t]==false)
               key[t]=min(key[t],x[1]);
           }
       }
       return ans;
   }
