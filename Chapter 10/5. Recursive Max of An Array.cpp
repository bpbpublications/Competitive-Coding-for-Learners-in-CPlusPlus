#include<iostream>
using namespace std;
int findMax(int ar[],int n)
{
	if(n==0) return ar[0];
	
		if(ar[n]>findmax(ar,n-1))
				return ar[n];
			else 
				return findMax(ar,n-1);
		
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];	
	cout<<findMax(ar,n-1);
}

