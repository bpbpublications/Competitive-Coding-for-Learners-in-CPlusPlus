
#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	
	int myArray[r][c];
	int tranpose[c][r];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>myArray[i][j];
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			tranpose[j][i]=myArray[i][j];
			
		}
	}
	
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<tranpose[i][j]<<" ";
		}
		cout<<endl;
	}
}
