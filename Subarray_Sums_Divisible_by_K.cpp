class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> v(k,0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=(nums[i]%k+k)%k;
            v[sum%k]++;
        }
        int result=v[0];
        for(int i=0;i<v.size();i++)
        {
            result+=(v[i]*(v[i]-1))/2;
        }
        return result;
    }
};
