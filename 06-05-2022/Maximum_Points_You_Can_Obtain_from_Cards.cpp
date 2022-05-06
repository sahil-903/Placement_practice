class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        vector<int> v(n),v1(n);
        v[0]=cardPoints[0];
        v1[n-1]=cardPoints[n-1];
        
        for(int i=1;i<cardPoints.size();i++)
        {
            v[i]=v[i-1]+cardPoints[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            v1[i]=v1[i+1]+cardPoints[i];
        }
        
        int mx=max(v[k-1],v1[n-k]);
        cout<<mx<<endl;
        for(int i=1;i<k;i++)
        {
            mx=max(mx,v[i-1]+v1[n-k+i]);
        }
        return mx;
        
        
    }
};
