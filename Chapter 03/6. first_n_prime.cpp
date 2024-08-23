#include<iostream>
#include<cmath>
using namespace std;
int check_prime(int n)
{
	int sroot=sqrt(n);
	
	for(int i=2;i<=sroot;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,i=0;
	cin>>n;
	for(int num=2;;num++)
	{
		if(check_prime(num))
		{
			cout<<num<<" ";
			i++;
		}
		if(i==n)
			break;
	}
}