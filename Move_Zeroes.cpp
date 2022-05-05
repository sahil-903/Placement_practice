class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
            }
        }
        int temp=nums.size()-v.size();
        nums.clear();
        for(int i=0;i<v.size();i++)
        {
            nums.push_back(v[i]);
        }
        for(int i=0;i<temp;i++)
        {
            nums.push_back(0);
        }
    }
};
