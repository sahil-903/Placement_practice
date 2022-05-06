class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int l=j+1,r=nums.size()-1;
                while(l<r)
                {
                    if(nums[i]+nums[j]+nums[l]+nums[r]==target)
                    {
                        v.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++,r--;
                    }
                    else if(nums[i]+nums[j]+nums[l]+nums[r]>target)
                    {
                        r--;
                    }
                    else
                        l++;
                }
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
