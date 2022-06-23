class Solution {
public:
    bool find(int curr,int prev,vector<int>& stones,vector<vector<int>>& dp){
        int n=stones.size();
        if(curr==n-1) return true;
        if(dp[curr][prev]!=-1) return dp[curr][prev];
        int jump=stones[curr]-stones[prev];
        for(int i=curr+1;i<n;i++){
            if(stones[i]-stones[curr]==jump || stones[i]-stones[curr]==jump-1 || stones[i]-stones[curr]==jump+1)
                if(find(i,curr,stones,dp)) return dp[curr][prev]=true;
        }
        return dp[curr][prev]=false;
    }
    bool canCross(vector<int>& stones) {
        if(stones[1]!=1) return false;
        int n=stones.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return find(1,0,stones,dp);
    }
};
