#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int myArray[n];
	for(int i=0;i<n;i++)
	cin>>myArray[i];
	
	int dec_equivalent=0,power=0;
	
	for(int i=0;i<n;i++)
	{
		if(myArray[i]==1)
		{
			dec_equivalent+=pow(2,n-1-i);
		}
	}
	
	cout<<dec_equivalent;
 }

 
 