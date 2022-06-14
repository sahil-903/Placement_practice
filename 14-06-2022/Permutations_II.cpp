class Solution {
public:
    void permute(set<vector<int>> &res, vector<int> nums, int low) {
            for(int i = low; i < nums.size(); i++){
                if(i>low && nums[i]==nums[low]){continue;}
                swap(nums[i], nums[low]);
                permute(res, nums, low+1);
        }
        res.insert(nums);
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res;
        vector<vector<int>> res1;
        sort(nums.begin(),nums.end());
        permute(res, nums, 0);
        for(auto x: res)
            res1.push_back(x);
        return res1;
    }
};
