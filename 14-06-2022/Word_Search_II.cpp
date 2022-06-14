struct node{
    node *next[26]={NULL};
    bool end=false;
    string str;
};
class Solution {
public:
    node *insert(string &s,node *root){
        node *head=root;
        for(auto i:s){
            if(!head->next[i-'a']) head->next[i-'a']=new node;
            head=head->next[i-'a'];
        }
        head->end=true;
        head->str=s;
        return root;
    }
    vector<int> p={0,1,0,-1,0};
    void func(vector<vector<char>>& mat,int i,int j,node *root,unordered_set<string> &us){
        if(root->end) us.insert(root->str);
        char ch=mat[i][j];
        mat[i][j]='$';
        for(int l=0;l<4;l++){
            int x=i+p[l],y=j+p[l+1];
            if(x<0 or y<0 or x==mat.size() or y==mat[0].size() or mat[x][y]=='$' or !root->next[mat[x][y]-'a']) continue;
            func(mat,x,y,root->next[mat[x][y]-'a'],us);
        }
        mat[i][j]=ch;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> ans;
        int m=board.size(),n=board[0].size();
        node *root=new node;
        for(auto i:words) root=insert(i,root);
        unordered_set<string> us;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(root->next[board[i][j]-'a']) func(board,i,j,root->next[board[i][j]-'a'],us);
            }
        }
        for(auto i:us) ans.push_back(i);
        return ans;
    }
};
