class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        for(int k=0;k<v.size();k+=2)
        {
            int i=v[k];
            int j=v[k+1];
                
                    int temp=i;
                    while(temp>=0)
                    {
                        matrix[temp][j]=0;
                        temp--;
                    }
                    temp=j;
                    while(temp>=0)
                    {
                        matrix[i][temp]=0;
                        temp--;
                    }
                    temp=i;
                    while(temp<matrix.size())
                    {
                        matrix[temp][j]=0;
                        temp++;
                    }
                    temp=j;
                    while(temp<matrix[0].size())
                    {
                        matrix[i][temp]=0;
                        temp++;
                    }
            }
        
    }
};
