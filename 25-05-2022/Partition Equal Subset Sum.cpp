class Solution{
public:
    int subsetSum(int ind,int target,int arr[],vector<vector<int>> &dp)
    {
        if(target==0)
            return 1;
        if(ind==0 && target!=0)
            return 0;
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        
        if(arr[ind-1]>target)
        {
            dp[ind][target]=subsetSum(ind-1,target,arr,dp);
        }
        else
        {
            dp[ind][target]=subsetSum(ind-1,target-arr[ind-1],arr,dp) || subsetSum(ind-1,target,arr,dp);
        }
        
        return dp[ind][target];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        bool temp;
        if(sum%2==1)
            return 0;
        
            int target=sum/2;
            vector<vector<int>> dp(N+1,vector<int>(target+1,-1));
            return subsetSum(N,target,arr,dp);
    }
};
