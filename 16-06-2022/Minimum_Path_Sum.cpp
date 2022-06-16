class Solution {
    int dp[201][201];
    public:
    int solve(int m, int n, int i, int j, vector<vector<int>>& grid)
    {
    
        if(i == m-1 && j == n-1){
            return grid[i][j];
        }
        if(i>=m || j>=n){
            return INT_MAX;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        return dp[i][j] = grid[i][j] + min(solve(m,n,i+1,j,grid),solve(m,n,i,j+1,grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(m,n,0,0,grid);
    }
};
