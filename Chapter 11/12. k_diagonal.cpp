#include<iostream>
using namespace std;

int main()
{
	int r,c,k;
	cin>>r>>c;
	
	int myArray[r][c];
	
	cin>>k;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>myArray[i][j];
		}
	}
	
    int x,y;
	x=r-k;
	if(x>=0)
	{
		y=0;
	}
	else
	{
		y=x*-1;
		x=0;
	}
	
	for(int i=x;i<r&&y<c;i++)
	{
		cout<<myArray[i][y]<<" ";
		y++;
	}
}
