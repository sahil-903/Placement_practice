class Solution {
public:
    void gameOfLife(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        vector<vector<int>> result(m,vector<int>(n));
        int count1;        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                count1=0;
               //First Check ********************************************************************** 
                if((i-1>=0)&&(a[i-1][j]==1))                   
                    count1++;
                
                if((i+1<m)&&(a[i+1][j]==1))                 
                    count1++;
               
                if((j-1>=0)&&(a[i][j-1]==1))                    
                    count1++;
                
                if((j+1<n)&&(a[i][j+1]==1))                   
                    count1++;
               
                if((i-1>=0 && j-1>=0)&&(a[i-1][j-1]==1))                  
                    count1++;
               
                 if((i+1<m && j-1>=0)&&(a[i+1][j-1]==1))                 
                    count1++;
                
                 if((i-1>=0 && j+1<n)&&(a[i-1][j+1]==1))                 
                    count1++;
                
                 if((i+1<m && j+1<n)&&(a[i+1][j+1]==1))                   
                    count1++;
                
                //Second Check ****************************************************************
                if(a[i][j]==1)
                {
                    if(count1<2)
                        result[i][j]=0;
                    else if(count1>3)
                        result[i][j]=0;
                    else
                        result[i][j]=1;
                }
                else
                {
                    if(count1==3)
                        result[i][j]=1;
                    else
                        result[i][j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=result[i][j];
            }
        }
    }
};
