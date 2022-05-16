class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                if(nums[i]>nums[i+1])
                {
                    return i;
                }
            }
            else if(i==nums.size()-1)
            {
                if(nums[i]>nums[i-1])
                {
                    return i;
                }
            }
            else
            {
                if(nums[i]>nums[i+1] && nums[i]>nums[i-1])
                    return i;
            }
        }
        return 0;
    }
};

// More optimised solution 4ms

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < nums[mid + 1]) lo = mid + 1;
            else hi = mid;
        }
        return lo;
    }
};
