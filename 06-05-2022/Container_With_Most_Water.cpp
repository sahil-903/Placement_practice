class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int ans=0;
        int temp=0;
        for(int i=0,j=n-1;i<n,j>=0;)
        {
            if(j<i)
            {
                break;
            }
            if(height[i]<height[j])
            {
                temp=(j-i)*height[i];
                i++;
            }
            else
            {
                temp=(j-i)*height[j];
                j--;
            }
            ans=max(temp,ans);
        }
        return ans;
    }
};
