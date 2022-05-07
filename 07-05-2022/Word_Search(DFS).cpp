class Solution {
public:
    bool dfs(vector<vector<char>> & board, const string & word,int i , int j)
    {
        if(word.empty())
            return false;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size())
            return false;
        if(word[0]!=board[i][j])
            return false;
        if(word.size()==1)
            return true;
        
        char temp=board[i][j];
        board[i][j]='/';
        
        string nextWord=word.substr(1);
        bool found = false;
        if(dfs(board,nextWord,i+1,j))
            found=true;
        if(dfs(board,nextWord,i-1,j))
            found=true;
        if(dfs(board,nextWord,i,j+1))
            found=true;
        if(dfs(board,nextWord,i,j-1))
            found=true;
        
        // restore the cell's char and return
        board[i][j]=temp;
        return found;
    }
        
    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return false;
        
        // iterate over grid to find instances of first letter
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                // if letter found, run bfs search for rest of word
                if (board[i][j] == word[0] && dfs(board, word, i, j)) return true;
            }
        }
        return false;
    }
};
