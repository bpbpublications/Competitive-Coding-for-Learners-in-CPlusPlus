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
	int a,b;
	cin>>a>>b;
	if(check_prime(a) && check_prime(b))
	{
		if(a-b==2 || b-a==2)
			cout<<"Yes";
		else
			cout<<"No";
	}
	else
		cout<<"No";
}

