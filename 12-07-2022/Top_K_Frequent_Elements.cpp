class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second < b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> v;
        priority_queue<pair<int,int>> pq; 
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto x: mp)
        {
            pq.push({x.second,x.first});
            if(pq.size()>(mp.size()-k))
            {
                v.push_back(pq.top().second);
                pq.pop();
            }
        }
        return v;
    }
};
