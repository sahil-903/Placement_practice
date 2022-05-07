// This is the backtracking method it is write but it may give tle in some cases.
// So, I also provided DFS tacknic...
class Solution {
public:
    int di[4]={-1,0,1,0};
    int dj[4]={0,-1,0,1};
    
    bool backtrac(vector<vector<char>> board,int i,int j, int si, string s)
    {
        if(si==s.length())
            return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
            return false;
        
        if(s[si]!=board[i][j])
            return false;
        char temp=board[i][j];
        board[i][j]='/';
        for(int k=0;k<4;k++)
        {
            bool res=backtrac(board,i+di[k],j+dj[k],si+1,s);
            if(res)
            {
                board[i][j]=temp;
                return true;
            }
        }
        board[i][j]=temp;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!=word[0])
                    continue;
                bool res=backtrac(board,i,j,0,word);
                if(res)
                    return res;
            }
        }
        return false;
    }
};
