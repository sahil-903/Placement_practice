class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int> mp;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    v.push_back({nums[i],nums[l],nums[r]});
                    l++,r--;
                }
                else if(nums[i]+nums[l]+nums[r]>0)
                {
                    r--;
                }
                else
                    l++;
            }
        }
        set<vector<int>> st;
        for(int i=0;i<v.size();i++)
        {
            st.insert(v[i]);
        }
        v.clear();
        for(auto x: st)
        {
            v.push_back(x);
        }
        return v;
    }
};
