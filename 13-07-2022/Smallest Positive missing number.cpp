int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int temp=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0 && temp==arr[i])
                temp++;
                
        }
        return temp;
        
    }
