class Solution{
    void solve(vector<string> &v1 , vector<vector<int>> &m,string st,int i, int j, int n, int k ,vector<vector<int>> &v)
    {
        if(i==n-1 && j==k-1)
        {
            v1.push_back(st);
            return;
        }
        //down
        if(i + 1 < n && !v[i + 1][j] && m[i + 1][j] == 1)
        {
            v[i][j]=1;
            solve(v1,m,st+"D",i+1,j,n,n,v);
            v[i][j]=0;
        }
        //right
        if(j-1>=0 && !v[i][j-1] && m[i][j-1] == 1)
        {
            v[i][j]=1;
            solve(v1,m,st+"L",i,j-1,n,n,v);
            v[i][j]=0;
        }
        //left
        if(j + 1 < k && !v[i][j+1] && m[i][j+1] == 1)
        {
            v[i][j]=1;
            solve(v1,m,st+"R",i,j+1,n,n,v);
            v[i][j]=0;
        }
        //up
        if(i-1>=0 && !v[i-1][j] && m[i - 1][j] == 1)
        {
            v[i][j]=1;
            solve(v1,m,st+"U",i-1,j,n,n,v);
            v[i][j]=0;
        }
        // else
        // {
            
        // }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> v(n,vector<int>(n,0));
        vector<string> v1;
        if(m[0][0]==0)
            return v1; 
       
        solve(v1,m,"",0,0,n,n,v);
         
        return v1;
    }
};
