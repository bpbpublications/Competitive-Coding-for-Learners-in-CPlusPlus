#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int myArray[n];
	
	for(int i=0;i<n;i++)
	cin>>myArray[i];
	
	int count0=0,count1=0;
	
	for(int i=0;i<n;i++)
	{
		if(myArray[i]==0)
		count0++;
		
		else
		count1++;
		
	}
	int k=0;
	while(count0>0 && count1>0)
	{
		myArray[k++]=0;
		myArray[k++]=1;
		count0 --;
		count1 --;
	}
	
	while(count0>0)
	{
		myArray[k++]=0;
		count0 --;		
	}
	
	while(count1>0)
	{
	
		myArray[k++]=1;
		count1 --;
	}
	
	for(int i=0;i<n;i++)
	cout<<myArray[i]<<" ";
}
