#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int **matrix=(int**)malloc(sizeof(int*)*n);
	
	for(int i=0;i<n;i++)
	matrix[i]=(int*)malloc(sizeof(int)*m);
	
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>matrix[i][j];
			
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cout<<matrix[i][j]<<endl;
		
}