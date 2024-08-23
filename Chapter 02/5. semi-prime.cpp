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
	int n,sroot,flag=0;
	cin>>n;
	sroot=sqrt(n);
	for(int i=2;i<=sroot;i++)
	{
		if(n%i==0)
		{
			if(check_prime(i) && check_prime(n/i))
			{
				flag=1;
				break;
			}
		}
	}
	if(flag)
		cout<<"Yes";
	else
		cout<<"No";
}

