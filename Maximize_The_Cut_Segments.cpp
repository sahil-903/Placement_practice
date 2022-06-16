class Solution
{
    int dp[10005];
    int solve(int n, int x , int y, int z)
    {
        if(n==0)
            return 0;
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        if(dp[n]!=-1)
            return dp[n];
        if(n>=x)
            a=solve(n-x,x,y,z);
        if(n>=y)
            b=solve(n-y,x,y,z);
        if(n>=z)
            c=solve(n-z,x,y,z);
        return dp[n]=1+max(a,max(b,c));
    }
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        memset(dp,-1,sizeof(dp));
        int ans=solve(n,x,y,z);
        if(ans<0)
            return 0;
        else
            return ans;
    }
};
