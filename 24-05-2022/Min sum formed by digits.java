class Solution {
    
    public static long minSum(int arr[], int n)
    {
        // Your code goes here
        Arrays.sort(arr);
        
        String s1="0",s2="0";
        for(int i=0;i<n;)
        {
            s1+=Integer.toString(arr[i]);
            i++;
            if(i<n)
            {
                s2+=Integer.toString(arr[i]);
                i++;
            }
        }
        long temp=Long.parseLong(s1)+Long.parseLong(s2);
        return temp;
    }
}
