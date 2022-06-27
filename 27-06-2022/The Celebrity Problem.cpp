// Optimal approch

int celebrity(vector<vector<int> >& M, int n) 
   {

       vector<int> cel;

       int ct=0,ans=-1;
       for(int i=0;i<n;i++) 
           cel.push_back(0);
       for(int i=0;i<n;i++){
           if(M[i]==cel) 
           {
               ct++;
               ans=i;
               
           }
       }
       if(ct!=1) 
           return -1;
       return ans;

}

// Greedy approch

   int celebrity(vector<vector<int> >& M, int n) 
   {

       int in[n]={0};
       int out[n]={0};

       for(int i=0;i<n;i++) 
       {
           for(int j=0;j<n;j++)
           {
               if(M[i][j]==1)
               {
                   in[j]++;
                   out[i]++;
               }
                
           }
       }
       for(int i=0;i<n;i++)
       {
           if(in[i]==n-1 && out[i]==0)
                return i;
       }
           
       return -1;

}
