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
	int m;
	cin>>m;
	
	for(int i=0;i<n;i++)
	{
		if(myArray[i]==m)
			cout<<i;
	}
}
