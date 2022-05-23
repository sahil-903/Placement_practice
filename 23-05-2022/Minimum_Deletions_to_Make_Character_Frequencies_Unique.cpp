class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<int> v;
        int count=0;
        for(auto x: mp)
        {
            // cout<<x.first<<" "<<x.second<<endl;
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-2;i>=0;i--)
        {
            if(v[i]==v[i+1])
            {
                v[i]--;
            }
            else if(v[i+1]<v[i] && v[i+1]!=0)
            {
                v[i]=v[i+1]-1;
            }
            else if(v[i+1]==0)
            {
                v[i]=0;
            }
            count+=v[i];
        }
        count+=v[v.size()-1];
        return s.size()-count;
    }
};
