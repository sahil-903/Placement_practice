class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count = 0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            count++;
            if(nums[i]>=count)
                count=0;
        }
        if(count==0)
            return true;
        else
            return false;
    }
};
