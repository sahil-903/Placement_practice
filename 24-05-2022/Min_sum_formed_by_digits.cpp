class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        vector<long long> v,v1;
        sort(arr,arr+n);
        
        string s1="0",s2="0";
        for(long long i=0;i<n;)
        {
            s1+=to_string(arr[i]);
            i++;
            if(i<n)
            {
                s2+=to_string(arr[i]);
                i++;
            }
        }
        long long temp=stoll(s1)+stoll(s2);
        return temp;
    }
};
