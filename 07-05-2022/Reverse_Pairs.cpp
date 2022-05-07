class Solution {
public:
    int ans;
    void merge(vector<int> &nums,int l,int mid,int h)
    {
        int i=l,j=mid+1;
        while(i<=mid && j<=h)
        {
            if((long long)nums[i]> (long long)2*nums[j])
            {
                ans+=(mid-i+1);
                j++;
            }
            else
                i++;
        }
        sort(nums.begin()+l,nums.begin()+h+1);
    }
    
    void ms(vector<int>& nums, int l, int h)
    {
        if(l==h)
            return ;
        
        int mid=l+(h-l)/2;
        ms(nums,l,mid);
        ms(nums,mid+1,h);
        merge(nums,l,mid,h);
    }
    
    int reversePairs(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        if(nums.size()==0)
            return 0;
        ans=0;
        ms(nums,l,h);
        return ans;
    }
};
