class Solution{
public:
   vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
   {
       // code here....
       for(int row = 0; row < n; row++)
       {
           if(mat[row][0] == 'O')
               dfs(row, 0, mat);
           if(mat[row][m-1] == 'O')
               dfs(row, m-1, mat);
       }
       for(int col = 0; col < m; col++)
       {
           if(mat[0][col] == 'O')
               dfs(0, col, mat);
           if(mat[n-1][col] == 'O')
               dfs(n-1, col, mat);
       }
       
       for(auto &row : mat)
       {
           for(auto &c : row)
           {
               if(c == '#')
                   c = 'O';
               else if(c == 'O')
                   c = 'X';
           }
       }
       
       return mat;
   }
private:
   void dfs(int row, int col, vector<vector<char>> & mat)
   {
       mat[row][col] = '#';
       for(int dir = 0; dir < 4; dir++)
       {
           int newRow = row + dx[dir];
           int newCol = col + dy[dir];
           if(newRow >= 0 and newCol >= 0 and newRow < mat.size() and newCol < mat[0].size())
           {
               if(mat[newRow][newCol] == 'O')
                   dfs(newRow, newCol, mat);
           }
       }
   }
   
   int dx[4] = {1,0,-1,0};
   int dy[4] = {0,1,0,-1};
};
