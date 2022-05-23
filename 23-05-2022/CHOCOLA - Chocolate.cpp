#include<bits/stdc++.h>
using namespace std;
int main() {
	
	// your code here
	
	int m,n,cost;
	cin>>m>>n;
	int rows=m-1; //horizontal edges
	int cols=n-1; //vertical edges
	int HS[rows]; //Horizontal Slide
	int VS[cols]; // Vertical Slide 
	
	int i,j;
	
	for(i=0;i<rows;i++)
	cin>>HS[i];
	for(j=0;j<cols;j++)
	cin>>VS[j];
	
	sort(HS,HS+rows,greater<int>());	
	sort(VS,VS+cols,greater<int>());

	i=0,j=0,cost=0;
	
	int hor_part=1,ver_part=1;
	
	while(i<rows && j<cols)
	{
		if(VS[j]>=HS[i])  //Vertical cut
		{
			cost+=VS[j]*ver_part;
			hor_part++;
			j++;
		}
		else         //horizontal Cut
		{
			cost+=HS[i]*hor_part;
			ver_part++;
			i++;
		}
	}
	while(i<rows)
	{
		cost+=HS[i]*hor_part;
		ver_part++;
		i++;
	}
	while(j<cols)
	{
	
			cost+=VS[j]*ver_part;
			hor_part++;	
			j++;
	}
	cout<<cost;
	

	
	return 0;
}
