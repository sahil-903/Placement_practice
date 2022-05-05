 public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long mn=INT_MAX;
    for(long long i=0;m+i-1<n;i++)
    {
        long long temp=a[m+i-1]-a[i];
        mn=min(mn,temp);
    }
    return mn;
    } 
};
