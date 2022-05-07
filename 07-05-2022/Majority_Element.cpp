class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=nums.size()/2;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second>temp)
            {
                temp=x.first;
                break;
            }
        }
        return temp;
    }
};
