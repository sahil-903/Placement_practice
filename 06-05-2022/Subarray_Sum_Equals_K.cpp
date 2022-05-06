class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]++;
        int count=0,count1=0;
        for(int i=0;i<nums.size();i++){
            count += nums[i];
            count1 += mp[count-k];
            mp[count]++;
        }
        return count1;
    }
};
