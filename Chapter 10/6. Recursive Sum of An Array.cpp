#include<iostream>
using namespace std;
int findSum(int *ar,int n)
{
	if(n==0)
		return ar[0];
	else
		return findSum(ar,n-1)+ar[n];
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];	
	cout<<findSum(ar,n-1);
}

