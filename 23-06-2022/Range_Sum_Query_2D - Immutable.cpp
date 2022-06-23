class NumMatrix {
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        v.resize(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=matrix[i][j];
                v[i][j]=sum;
            }
        }
        for(int j=1;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                v[j][i]+=v[j-1][i];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        if(row1>0 && col1>0)
        {
            sum=v[row2][col2]-v[row1-1][col2]-v[row2][col1-1];
            sum+=v[row1-1][col1-1];
            return sum;
        }
        else if(row1==0 && col1>0)
        {
            sum=v[row2][col2]-v[row2][col1-1];
            return sum;
        }
        else if(col1==0 && row1>0)
        {
            sum=v[row2][col2]-v[row1-1][col2];
            return sum;
        }
        else if(row1==0 && col1==0)
        {
            sum=v[row2][col2];
            return sum;
        }
        else
            return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
