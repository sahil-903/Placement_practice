void combination(vector<vector<int>>&res,vector<int>&cur,int i,int n,int k,int idx)
{
    if(idx==k)
    {
        res.push_back(cur);
        return ;
    }
    if(idx>k)
    {
        return;
    }
    if(i>n)
    {
        return;
    }
    cur.push_back(i);
    combination(res,cur,i+1,n,k,idx+1);
    idx--;
    cur.pop_back();
    combination(res,cur,i+1,n,k,idx+1);
    
}

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
       
        vector<vector<int>>res;
        vector<int>cur;
        combination(res,cur,1,n,k,0);
        return res;
    }
};
