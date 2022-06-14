class Solution {
    int count=0;
public:
    int countArrangement(int n) {
        int arr[n+1];
        memset(arr,0,sizeof arr);
        dfs(arr,1,n);
        return count;
    }
    
    void dfs(int arr[],int val,int n)
    {
        if(val>n)
        {
            count++;
            return;
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0 && (val%i==0 || i%val==0))
            {
                arr[i]=val;
                dfs(arr,val+1,n);
                arr[i]=0;
            }
        }
    }
};
