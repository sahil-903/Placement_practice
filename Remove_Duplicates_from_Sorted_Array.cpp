class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int temp=nums.size()-st.size();
        nums.clear();
        for(auto x: st)
        {
            nums.push_back(x);
        }
        
        // for(int i=0;i<temp;i++)
        // {
        //     nums.push_back('_');
        // }
        // for(auto x: nums)
        // {
        //     cout<<x;
        // }
        return st.size();
        
    }
};
