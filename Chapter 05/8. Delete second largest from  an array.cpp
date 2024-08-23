#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int myArray[n];
	
	for(int i=0;i<n;i++)
	cin>>myArray[i];
	
	int large, second_large;
	large=myArray[0];
	
	for(int i=0;i<n;i++)
	{
		if(myArray[i]>large)
		large=myArray[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(myArray[i]<large&& myArray[i]>second_large)
		second_large=myArray[i];
	}
	int i;
	for(i=0;i<n;i++)
	{
		if(myArray[i]==second_large)
		break;
	}

     for(int j=i;j<n-1;j++)
      myArray[j]=myArray[j+1];

     n=n-1;
      for(i=0;i<n;i++)
       cout<<myArray[i]<<" ";
}
