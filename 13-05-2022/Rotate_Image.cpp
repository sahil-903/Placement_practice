class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n= matrix.size();  // size of row 
     
        for(int i=0; i<n; i++)  // traversing row
        {
            for(int j=0; j<=i; j++)  // traversing col
            {
             swap(matrix[i][j],matrix[j][i]);  // swap ith element with jth element 
            }
        } 
         for(int i=0; i<n; i++)
         {
           reverse(matrix[i].begin(),matrix[i].end());   // col reverse
         } 
    }
};
