class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mn=nums[0],count=0;
        for(int i=1;i<nums.size();i++)
        {
            count+=nums[i]-mn;
        }
        return count;
    }
};
