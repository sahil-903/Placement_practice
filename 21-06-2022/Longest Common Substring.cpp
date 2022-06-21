 int longestCommonSubstr (string S1, string S2, int n, int m)
   {
       vector<int>p(m+1,0), c(m+1,0);
       int r=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(S1[i-1]==S2[j-1]){
               c[j]=1+p[j-1];
               r=max(r,c[j]);
               }
               else
               c[j]=0;
           }
           p=c;
       }
       return r;
   }
