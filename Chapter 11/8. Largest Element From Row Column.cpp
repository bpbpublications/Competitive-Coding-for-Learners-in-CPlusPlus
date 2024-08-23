#include<iostream>
using namespace std;

int main()
{
	
	int r,c;
	cin>>r>>c;
	
	int row_max=0,column_max=0;
	int myArray[r][c];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>myArray[i][j];
	}
	
	for(int i=0;i<r;i++)
	{
		row_max=0;
		for(int j=0;j<c;j++)
		{
			if(myArray[i][j]>row_max)
		      row_max=myArray[i][j];
		}
		cout<<row_max<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<c;i++)
	{
		column_max=0;
		for(int j=0;j<r;j++)
		{
			if(myArray[j][i]>column_max)
			column_max=myArray[j][i];
		}
		cout<<column_max<<" ";
	}
	
	
}
