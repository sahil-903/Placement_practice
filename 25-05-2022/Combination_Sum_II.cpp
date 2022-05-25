class Solution {
public:
    void solve(int ind,int target,vector<int> & arr,vector<vector<int>> &v,vector<int> &ds)
    {
        if(target==0)
        {
            v.push_back(ds);
            return;
        }
        int i=ind;
        while(i<arr.size())
        {
            if(i>ind && arr[i]==arr[i-1])
            {
                i++;
                continue;
            }
            if(arr[i]>target)
                break;
            ds.push_back(arr[i]);
            solve(i+1,target-arr[i],arr,v,ds);
            ds.pop_back();
            i++;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> ds;
        solve(0,target,candidates,v,ds);
        return v;
    }
};
