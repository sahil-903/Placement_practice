class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int max_n  = *max_element(nums.begin(),nums.end());
        
        unordered_map<int,int> m;
        for(int &ele: nums) m[ele]++;
        
        vector<int> dp(max_n+1);
        dp[1]=m[1];
        
        for(int i=2 ;i<=max_n;i++)
            dp[i]= max(dp[i-1],dp[i-2]+m[i]*i);
    
        return dp[max_n]; 
    }
};
