bool isValid(int i,int j, int n, vector<vector<bool>> &vis)
    {
        if(i>=0 && i<n && j<n && j>=0 && vis[i][j]==false)
        {
            return true;
        }
        return false;
    }
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int tx=TargetPos[0]-1,ty=TargetPos[1]-1;
	    int x1=KnightPos[0]-1,y1=KnightPos[1]-1;
	    
	    if(x1==tx && y1==ty)
	        return 0;
	    vector<vector<bool>> vis(N,vector<bool>(N,false));
	    
	    queue<pair<int,int>>q;
	    q.push({x1,y1});
	    vis[x1][y1]=true;
	    
	    int count=0;
	    while(!q.empty())
	    {
	        int size=q.size();
	        count++;
	        while(size!=0)
	        {
	            pair<int,int> p =q.front();
	            q.pop();
	            
	            int xx=p.first;
	            int yy=p.second;
	            
	            int ax[8]={1,1,-1,-1,2,-2,2,-2};
	            int ay[8]={2,-2,2,-2,1,1,-1,-1};
	            
	            for(int i=0;i<8;i++)
	            {
	                int nx=xx+ax[i];
	                int ny=yy+ay[i];
	                
	                if(nx==tx && ny==ty)
	                    return count;
	                    
	                if(isValid(nx,ny,N,vis))
	                {
	                    vis[nx][ny]=true;
	                    q.push({nx,ny});
	                }
	            }
	            size--;
	        }
	    }
	    return count;
	}
