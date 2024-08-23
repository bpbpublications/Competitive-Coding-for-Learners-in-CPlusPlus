#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	
	int myArray[r][c];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>myArray[i][j];
	}
	int min,max,min_index,max_index,sum;
	
	for(int i=0;i<r;i++)
	{
		min=myArray[i][0];
		max=myArray[i][0];
		sum=0;
		for(int j=0;j<c;j++)
		{
			if(myArray[i][j]==1)
			sum=sum+pow(2,c-1-j);
		}
		if(sum<min)
		{
			min=sum;
			min_index=i;
		}
		
		if(sum>max)
		{
			max=sum;
			max_index=i;
		}
	}
	cout<<min_index<<endl;
	cout<<max_index;
}
