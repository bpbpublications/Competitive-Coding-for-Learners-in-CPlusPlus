#include<iostream>
#include<stdlib.h>
using namespace std;
int display(int ar[][100],int a,int b)  //callee
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main() //caller
{
	int ar[100][100];
	int a,b;
	cin>>a>>b;
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>ar[i][j];
		}
	}	
	display(ar,a,b);
}
	
	
	
	



