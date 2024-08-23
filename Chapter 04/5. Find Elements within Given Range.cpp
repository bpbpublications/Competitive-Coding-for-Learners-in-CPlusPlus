#include<iostream>
  using namespace std;
  int main()
  {
	int n;
	cin>>n;
	int myArray[n];
	for(int i=0;i<n;i++)
	{
		cin>>myArray[i];
	}
	int a,b;
	cin>>a;
	cin>>b;
	
	int count=0;
  	for(int i=0;i<n;i++)
	{
		if(myArray[i]>=a&&myArray[i]<=b)
		count=count+1;
	}
	cout<<count;
	
	
   }
