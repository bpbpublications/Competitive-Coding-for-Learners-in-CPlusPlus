#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int bin1[n],bin2[n],result[n];
	
	for(int i=0;i<n;i++)
	cin>>bin1[i];
	
	for(int i=0;i<n;i++)
	cin>>bin2[i];
	
	for(int i=0;i<n;i++)
	{
		if(bin1[i]==bin2[i])
		result[i]=0;
		else
		result[i]=1;
	}
	
	for(int i=0;i<n;i++)
	cout<<result[i];
	
}
