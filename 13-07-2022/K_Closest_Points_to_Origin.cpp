class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<pair<int,int>>dist(n);
        for(int i=0;i<n;i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            int dis=x*x+y*y;
            dist[i]={dis,i};
        }
        sort(dist.begin(),dist.end());
        vector<vector<int>>res;
        for(auto it:dist)
        {
            if(k==0)
                break;
            else
            {
                int x=points[it.second][0];
                int y=points[it.second][1];
                vector<int>temp;
                temp.push_back(x);
                temp.push_back(y);
                res.push_back(temp);
                k--;
            }
        }
        return res;
    }
};
