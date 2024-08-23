#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	
	int myArray[r][c];
	int sum=0,max=0;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>myArray[i][j];
	}
	
	for(int i=0;i<r;i++)
	{
		sum=0;
		for(int j=0;j<c;j++)
		{
			if(myArray[i][j]==1)
			sum++;
			
			else
			{
				if(sum>max)
			     	max=sum;
				
				sum=0;
			}
		}
		
		if(sum>max)
			max=sum;
	}
	
	cout<<max;
}
