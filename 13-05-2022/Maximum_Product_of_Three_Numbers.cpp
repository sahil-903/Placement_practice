class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int temp=nums[n-1]*nums[n-2]*nums[n-3];
        int temp1=nums[n-1]*nums[0]*nums[1];
        return max(temp,temp1);
    }
};
