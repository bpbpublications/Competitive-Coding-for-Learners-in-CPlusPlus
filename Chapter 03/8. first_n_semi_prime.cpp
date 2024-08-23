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
	int i,n,sroot,flag=0;
	cin>>n;
	for(int j=2;;j++)
	{
		flag=0;
		sroot=sqrt(j);
		for(i=2;i<=sroot;i++)
		{
			if(j%i==0)
			{
				if(check_prime(i) && check_prime(j/i))
				{
					flag=1;
					break;
				}
			}
		}
		if(flag)
		{
			cout<<j<<" ";
			n--;
		}
		if(n==0)
			break;
	}
}

