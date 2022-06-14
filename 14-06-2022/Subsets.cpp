class Solution {
public:
    void solve(vector<int>& nums,vector<int>&v1,vector<vector<int>>&v,int i)
    {
        
        if(i == nums.size())
        {
            v.push_back(v1);
            // for(auto x: v1)
            //     cout<<x<<" ";
            // cout<<endl;
            return;
        }
        v1.push_back(nums[i]);
        solve(nums,v1,v, i + 1);
        v1.pop_back();
        solve(nums,v1,v, i + 1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> v1;
        solve(nums,v1,v,0);
        return v;
    }
};
