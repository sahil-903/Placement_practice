class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
    for(int k=0;k<n;k++)            // Intermediate node
    {
        for(int i=0;i<n;i++)        // Source node
        {
            for(int j=0;j<n;j++)    // Destination node
            {
                // Check if path available from i to j via k
                if(matrix[i][k]==-1 || matrix[k][j]==-1)
                {
                    continue;   // not found then skip this intermediate node
                }
                int distance = matrix[i][k]+matrix[k][j];  // Distance from i to j via k
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=distance;
                }
                else
                {
                    matrix[i][j]=min(matrix[i][j],distance);
                }
            }
        }
    }
	}
