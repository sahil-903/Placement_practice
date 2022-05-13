void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size() && grid[i][j] == '1') {
            grid[i][j] = '0';

            dfs(grid, i - 1, j - 1);
            dfs(grid, i - 1, j);
            dfs(grid, i - 1, j + 1);
            dfs(grid, i, j - 1);
            dfs(grid, i, j + 1);
            dfs(grid, i + 1, j - 1);
            dfs(grid, i + 1, j);
            dfs(grid, i + 1, j + 1);
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int res = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);

                    res++;
                }
            }
        }

        return res;
    }
};
