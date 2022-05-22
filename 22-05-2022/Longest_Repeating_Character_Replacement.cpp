class Solution {
public:
    unordered_map<char,int> mp;
    int cal()
    {
        int mx=1;
        for(auto x: mp)
            mx=max(mx,x.second);
        return mx;
    }
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0,j=0,ans=1;
        while(j<n)
        {
            mp[s[j]]++;
            int mx=cal();
            int win=j-i+1;
            if(win-mx<=k)
                ans=max(ans,j-i+1);
            else
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
        
    }
};
