vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int row=grid.size();
	    int column=grid[0].size();
	    queue<pair<int,int>> q;
	    vector<vector<int>> ans(row,vector<int>(column,INT_MAX));
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<column;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push({i,j});
	                ans[i][j]=0;
	            }
	        }
	    }
	    while(!q.empty())
	    {
	        int i=q.front().first;
	        int j=q.front().second;
	        if((i-1)>=0 && ans[i][j]+1<ans[i-1][j])
	        {
	            ans[i-1][j]=ans[i][j]+1;
	            q.push({i-1,j});
	        }
	        if((j-1)>=0 && ans[i][j]+1<ans[i][j-1])
	        {
	            ans[i][j-1]=ans[i][j]+1;
	            q.push({i,j-1});
	        }
	        if((i+1)<row && ans[i][j]+1<ans[i+1][j])
	        {
	            ans[i+1][j]=ans[i][j]+1;
	            q.push({i+1,j});
	        }
	        if((j+1)<column && ans[i][j]+1<ans[i][j+1])
	        {
	            ans[i][j+1]=ans[i][j]+1;
	            q.push({i,j+1});
	        }
	        q.pop();
	    }
	    return ans;
	}
