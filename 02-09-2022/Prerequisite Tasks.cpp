class Solution {
public:
vector<bool>vis ;
vector<int> mark ;
bool check = false ;
void dfs(int i , int N , vector<int > adj[])
{
    vis[i] = true ;
    mark[i]++ ;
    for(auto it : adj[i])
    {
        mark[it]++ ;
     // cout<<mark[it]<<" " << it <<endl;
        if(mark[it] >1 ) {
            check = true ;
            return ;
        }
        if(vis[it] == false )
        {
            dfs(it ,N ,adj ) ;
        }
        mark[it]-- ;
    }
    mark[i]-- ;
    return;
}
bool isPossible(int N, vector<pair<int, int> >& p) {
       vis.resize(N , false ) ;
       mark.resize(N ,0 ) ;
       
       vector<int> adj[N] ;
       for(int i = 0 ; i < p.size() ; i++)
       {
           adj[p[i].second].push_back(p[i].first) ;
           
       }
       for(int i =0 ; i < N ; i++)
       {
           if(vis[i] == false )
           {
               dfs(i , N , adj ) ;
               if(check == true )
               return false ;
           }
       }
       return true ;

}
};
