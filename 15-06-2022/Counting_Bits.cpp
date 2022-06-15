class Solution {
public:
    vector<int> countBits(int n) {

    vector<int>arr(n);
    
    arr.push_back(0);
    
    if(n==0){
        return arr;
    }
    
    for(int i=1;i<=n;i++){
        if(i%2==0){
            arr[i]=arr[i/2];
        }
        
        else{
            arr[i]=arr[i/2]+1;
        }
    }
    return arr;
    
}
};
