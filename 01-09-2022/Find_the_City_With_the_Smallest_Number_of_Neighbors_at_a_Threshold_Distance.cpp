class Solution {
public:
int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {


		long long int path[n][n];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				path[i][j]=INT_MAX;
				path[j][j]=0;
			}
		}



		for(int i=0;i<edges.size();i++){
			path[edges[i][0]][edges[i][1]]=edges[i][2];
			path[edges[i][1]][edges[i][0]]=edges[i][2];

		}


		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){

				   // if(path[i][k]+path[k][j]<path[i][j]){
				   //     path[i][j]=path[i][k]+path[k][j];
				   // }

				   path[i][j]=min(path[i][j],path[i][k]+path[k][j]);
				}
			}
		}

		// for(int i=0;i<n;i++){
		// 	for(int j=0;j<n;j++){
		// 		cout<<path[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		// cout<<endl;

		int count=INT_MAX,vertex=-1;

		for(int i=0;i<n;i++){
			int cur_count=0;
			for(int j=0;j<n;j++){
				if((i!=j) && (path[i][j]<=distanceThreshold)) cur_count++;
			}

			if(cur_count<=count){
				count=cur_count;
				vertex=i;
			}
		}

		return vertex;


	}
};
