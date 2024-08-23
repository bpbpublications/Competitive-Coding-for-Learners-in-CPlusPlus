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
	int n;
	cin>>n;
	
	for(int i=2;;i++)
	{
		if(check_prime(i) && check_prime(i+2))
		{
			cout<<"("<<i<<","<<i+2<<")"<<endl;
			n--;
		}
		if(n==0)
			break;
	}
}

